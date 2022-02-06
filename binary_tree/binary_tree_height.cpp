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

int calculateHeight(node *root)
{
    if (root == NULL)
        return 0;
    // if (root->left == NULL && root->right == NULL)
    //     return 1;
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    return max(leftHeight, rightHeight) + 1; //+1 for adding current node height
}

int main()
{
    node *root = NULL;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << calculateHeight(root);
}
// time complexity = O(n) where 'n' is the no. of nodes in the tree