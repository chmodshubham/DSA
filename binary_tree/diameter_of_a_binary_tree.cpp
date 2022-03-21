#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left = NULL;
    node* right = NULL;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int cal_height(node* root)
{
    if (root == NULL)
        return 0;

    return max(cal_height(root->left), cal_height(root->right)) + 1;
}

int calculate_diameter(node* root)
{
    if (root == NULL)
        return 0;

    int left_height = cal_height(root->left);
    int right_height = cal_height(root->right);
    int curr_diameter = left_height + right_height + 1; //+1 for taking the current node as a part in the diameter

    int left_diameter = calculate_diameter(root->left);
    int right_diameter = calculate_diameter(root->right);

    return max(curr_diameter, max(left_diameter, right_diameter));
}

int main()
{
    node* root = NULL;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << calculate_diameter(root);
}
// time complexity = O(n^2)