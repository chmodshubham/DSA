#include <bits/stdc++.h>
using namespace std;

// understand right view with level order traversal

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

void right_view(node *root)
{
    if (root == NULL)
        return;

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            node *curr = q.front();
            q.pop();

            if (i == n - 1) // we equate 'i' with (n-1) to get the rightmost node of each level in binary tree
            {
                cout << curr->data << " ";
            }

            if (curr->left != NULL)
                q.push(curr->left);

            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
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

    right_view(root);
}
