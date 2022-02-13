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

node *insertBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else // val > root->data
    {
        root->right = insertBST(root->right, val);
    }

    return root;
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7};
    node *root = NULL;
    for (auto i : arr)
    {
        root = insertBST(root, i);
    }
    inorder(root);
    // important point, inorder traversal of the binary search tree gives you the sorted order.
    return 0;
}