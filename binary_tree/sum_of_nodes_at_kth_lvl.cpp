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

int sumAtK(node *root, int k)
{
    if (root == NULL)
        return -1;

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int lvl = 0;
    int sum = 0;

    while (!q.empty())
    {
        node *n = q.front();
        q.pop();

        if (n != NULL)
        {
            if (lvl == k)
                sum += n->data;

            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
        }

        else if (!q.empty())
        {
            q.push(NULL);
            lvl++;
        }
    }
    return sum;
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

    cout << sumAtK(root, 2);
    return 0;
}