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

int cal_height(node *root)
{
    if (root == NULL)
        return 0;
    return max(cal_height(root->left), cal_height(root->right)) + 1;
}

bool is_balanced(node *root)
{
    if (root == NULL)
        return true;

    if (is_balanced(root->left) == false)
        return false;
    if (is_balanced(root->right) == false)
        return false;

    int l_height = cal_height(root->left);
    int r_height = cal_height(root->right);

    if (abs(l_height - r_height) <= 1) // abs() function gives mod value, e.g. |-2|=2
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

    if (is_balanced(root))
    {
        cout << "Balanced\n";
    }
    else
        cout << "Not balanced\n";

    node *root2 = NULL;
    root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(3);

    if (is_balanced(root2))
    {
        cout << "Balanced\n";
    }
    else
        cout << "Not balanced\n";
}
// time complexity =O(n^2) where n is no. of nodes