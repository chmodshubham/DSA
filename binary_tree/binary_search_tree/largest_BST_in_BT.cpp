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

struct info
{
    int max;
    int min;
    int size;
    int ans;
    bool isBST;
};

info largest_BST_in_BT(node *root)
{
    if (root == NULL)
        return {INT_MIN, INT_MAX, 0, 0, true};

    if (root->left == NULL && root->right == NULL)
        return {root->data, root->data, 1, 1, true};

    info left_info = largest_BST_in_BT(root->left);
    info right_info = largest_BST_in_BT(root->right);

    info current_info;
    current_info.size = (1 + left_info.size + right_info.size);

    if (left_info.isBST && right_info.isBST && left_info.max < root->data && right_info.min > root->data)
    {
        current_info.min = min(left_info.min, min(right_info.min, root->data));
        current_info.max = max(right_info.max, max(left_info.max, root->data));

        current_info.ans = current_info.size;
        current_info.isBST = true;

        return current_info;
    }

    current_info.ans = max(left_info.ans, right_info.ans);
    current_info.isBST = false;
    return current_info;
}

int main()
{
    node *root = NULL;
    root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);

    cout << "Largest BST size in BT : " << largest_BST_in_BT(root).ans;

    return 0;
}