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

int search(int inorder[], int start, int end, int val)
{
    for (int i = start; i < end; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

node *buildTree(int postorder[], int inorder[], int start, int end)
{
    if (start > end)
        return NULL;
    static int idx = 4;
    int val = postorder[idx];
    idx--;
    node *n = new node(val);
    if (start == end)
        return n;

    int pos = search(inorder, start, end, val);
    n->right = buildTree(postorder, inorder, pos + 1, end);
    n->left = buildTree(postorder, inorder, start, pos - 1);
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
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = buildTree(postorder, inorder, 0, 4); // 0 start point of inorder and 4 is end point of inorder
    inorderPrint(root);
    return 0;
}