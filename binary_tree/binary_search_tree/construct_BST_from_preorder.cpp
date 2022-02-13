#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left = NULL;
    node *right = NULL;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *construct_BST(int preorder[], int *preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
        return NULL;

    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderIdx = *preorderIdx + 1;

        if (*preorderIdx < n)
        {
            root->left = construct_BST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }
        if (*preorderIdx < n)
        {
            root->right = construct_BST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }
    return root;
}

void print_preorder(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

int main()
{
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5; // size of the array preorder[]
    int preorderidx = 0;
    node *root = construct_BST(preorder, &preorderidx, preorder[0], INT_MIN, INT_MAX, n);

    print_preorder(root);
    return 0;
}
// time complexity = O(n)
