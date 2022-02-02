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

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i < end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }
    return -1;
}

node *buildTree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
        return NULL;
    static int idx = 0;
    int curr = preorder[idx];
    idx++;
    node *n = new node(curr);
    if (start == end)
        return n;
    int pos = search(inorder, start, end, curr);
    n->left = buildTree(preorder, inorder, start, pos - 1);
    n->right = buildTree(preorder, inorder, pos + 1, end);

    return n;
}

void inorderPrint(node *root)
{
    if (root == NULL)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}