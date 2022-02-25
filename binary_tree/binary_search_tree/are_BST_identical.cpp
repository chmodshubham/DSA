#include <bits/stdc++.h>
using namespace std;

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

bool is_BST_identical(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;

    else if (root1 == NULL || root2 == NULL)
        return false;

    else // if both tree is not NULL
    {
        bool condition1 = (root1->data == root2->data);
        bool condition2 = is_BST_identical(root1->left, root2->left);
        bool condition3 = is_BST_identical(root1->right, root2->right);

        if (condition1 && condition2 && condition3)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    node *root = NULL;
    root = new node(3);
    root->left = new node(1);
    root->right = new node(5);

    if (is_BST_identical(root, root))
        cout << "identical\n";

    else
    {
        cout << "not identical\n";
    }
}