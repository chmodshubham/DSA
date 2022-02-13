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

bool getPath(node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }

    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }

    if (getPath(root->left, key, path) || getPath(root->right, key, path))
    {
        return true;
    }

    path.pop_back();
    return false;
}

int LCA(node *root, int n1, int n2)
{
    vector<int> path1, path2;

    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
    {
        return -1;
    }

    int pc;                                               // path control
    for (pc = 0; pc < path1.size() && path2.size(); pc++) // check 'pc' value is less than for both path1.size and path2.size
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    return path1[pc - 1];
}

node *LCA2(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
        return root;

    node *leftLCA = LCA2(root->left, n1, n2);
    node *rightLCA = LCA2(root->right, n1, n2);

    if (leftLCA && rightLCA) // check for the NULL value of leftLCA and rightLCA
        return root;

    if (leftLCA != NULL)
        return leftLCA;

    return rightLCA;
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

    // method 1
    int lca = LCA(root, 4, 3);
    if (lca == -1)
    {
        cout << "LCA doesn't exist\n";
    }
    else
    {
        cout << "LCA : " << lca << endl;
    }

    // method 2
    node *lca2 = LCA2(root, 4, 3);
    if (lca2 == NULL)
    {
        cout << "LCA doesn't exist\n";
    }
    else
    {
        cout << "LCA : " << lca2->data << endl;
    }
}