#include <bits/stdc++.h>
#include <iostream>
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

node *build_BST(node *root, int arr[], int st, int end)
{
    if (st > end)
        return NULL;

    int mid = (st + end) / 2;
    root = new node(arr[mid]);

    root->left = build_BST(root->left, arr, st, mid - 1);
    root->right = build_BST(root->right, arr, mid + 1, end);

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
    int arr[] = {10, 20, 30, 40, 50};
    node *root = NULL;
    root = build_BST(root, arr, 0, 4);

    print_preorder(root);
    cout << endl;
}
