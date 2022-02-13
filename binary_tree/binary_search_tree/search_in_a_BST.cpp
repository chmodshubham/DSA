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

node *search_in_BST(node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (key == root->data)
        return root;

    if (key < root->data)
    {
        return search_in_BST(root->left, key);
    }

    return search_in_BST(root->right, key); // key > root->right
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

    if (search_in_BST(root, 12) == NULL)
        cout << "Not Found\n";

    else
    {
        cout << "Found\n";
    }
}

// time complexity
// level          nodes to check
//   0                 n
//   1                 n/2
//   2                 n/4
//   3                 n/8
//   .                  .
//   .                  .
// let no. of nodes = n, height = h;
// height starts from 0
// 1+2^1+2^2+....+2^(h-1)=n
// 2^h -1 = n
// h = log(n+1)
// T(n)=O(n)