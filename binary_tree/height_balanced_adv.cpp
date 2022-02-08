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

bool is_balanced(node *root, int *height)
{
    if (root == NULL)
        return true;

    int l_height = 0, r_height = 0;

    if (is_balanced(root->left, &l_height) == false)
        return false;

    if (is_balanced(root->right, &r_height) == false)
        return false;

    *height = max(l_height, r_height) + 1;
    if (abs(l_height - r_height) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    int height = 0;
    if (is_balanced(root, &height))
    {
        cout << "Balanced\n";
    }
    else
        cout << "Not balanced\n";

    node *root2 = NULL;
    root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(3);
    height = 0;
    if (is_balanced(root2, &height))
    {
        cout << "Balanced\n";
    }
    else
        cout << "Not balanced\n";
}
// time complexity =O(n) where n is no. of nodes