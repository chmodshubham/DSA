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

node *lca(node *root, int n1, int n2) // lca=lowest common ancestor
{
    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *left = lca(root->left, n1, n2);
    node *right = lca(root->right, n1, n2);

    if (left != NULL && right != NULL)
        return root;

    if (left == NULL && right == NULL)
        return NULL;

    if (left != NULL /*&& right == NULL*/)
        return lca(root->left, n1, n2);

    // if (right != NULL && left == NULL)
    return lca(root->right, n1, n2);
}

int find_dist(node *root, int k, int dist)
{
    if (root == NULL)
        return -1;

    if (root->data == k)
        return dist;

    int left = find_dist(root->left, k, dist + 1);
    if (left != -1)
        return left;
    // int right = find_dist(root->right, k, dist + 1);
    // if (right != -1)
    //     return right;
    return find_dist(root->right, k, dist + 1);
}

int distance_between_nodes(node *root, int n1, int n2)
{
    node *lca_root = lca(root, n1, n2);

    int d1 = find_dist(lca_root, n1, 0);
    int d2 = find_dist(lca_root, n2, 0);

    return d1 + d2;
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

    cout << distance_between_nodes(root, 4, 7);
}