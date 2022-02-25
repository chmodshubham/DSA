#include <bits/stdc++.h>
using namespace std;

// pending to understand

struct node
{
public:
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<node *> construct_trees(int st, int end)
{
    vector<node *> tree;
    if (st > end)
    {
        tree.push_back(NULL);
        return tree;
    }

    for (int i = st; i <= end; i++)
    {
        vector<node *> left_subtree = construct_trees(st, i - 1);
        vector<node *> right_subtree = construct_trees(i + 1, end);

        for (int j = 0; j < left_subtree.size(); j++)
        {
            node *left = left_subtree[j];
            for (int k = 0; k < right_subtree.size(); k++)
            {
                node *right = right_subtree[k];
                node *n = new node(i);
                n->left = left;
                n->right = right;
                tree.push_back(n);
            }
        }
    }
    return tree;
}

void print_preorder(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

int main()
{
    vector<node *> total_trees = construct_trees(1, 3);
    for (int i = 0; i < total_trees.size(); i++)
    {
        cout << (i + 1) << " : ";
        print_preorder(total_trees[i]);
        cout << endl;
    }
    return 0;
}
