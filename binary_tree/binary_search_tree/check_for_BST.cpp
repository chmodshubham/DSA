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

bool check_for_bST(node *root, node *min, node *max)
{
    if (root == NULL)
        return true;

    if (min != NULL && root->data < min->data)
        return false;

    if (max != NULL && root->data > max->data)
        return false;

    bool left_valid = check_for_bST(root->left, min, root);
    bool right_valid = check_for_bST(root->right, root, max);

    return (left_valid && right_valid);
}

int main()
{
    node *root = NULL;
    root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);

    root->right->right = new node(6);

    if (check_for_bST(root, NULL, NULL))
    {
        cout << "Valid BST\n";
    }
    else
    {
        cout << "invalid BST\n";
    }
}
// time complexity = O(n)