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

int calculate_diameter(node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int lDiameter = calculate_diameter(root->left, &lh);
    int rDiameter = calculate_diameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
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
    cout << calculate_diameter(root, &height);
}
// time complexity = O(n)