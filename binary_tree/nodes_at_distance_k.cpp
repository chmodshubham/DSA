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

// case 1
void printSubtreeNodes(node *root, int k) // print node in the subtree and
{
    if (root == NULL || k < 0)
        return;

    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }

    printSubtreeNodes(root->left, k - 1);
    printSubtreeNodes(root->right, k - 1);
}

// case 2 // for ancestor nodes
int printNodesAtk(node *root, node *target, int k)
{
    if (root == NULL)
        return -1;

    if (root == target)
    {
        printSubtreeNodes(root, k);
        return 0;
    }
    // condition to check whether the target node is present in the left subtree of root or not
    int dl = printNodesAtk(root->left, target, k); // distance left
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubtreeNodes(root->right, k - dl - 2);
            // -2 in upper condition is for this ---
            //           1
            //  +1 ->   /  \   <- +1     == 2
            //         2    3
            //        /
            //       4
        }

        return 1 + dl;
    }

    // another condition to check for right subtree of root, whether the target node is present in it or not
    int dr = printNodesAtk(root->right, target, k); // distance right
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubtreeNodes(root->left, k - dl - 2);
        }

        return 1 + dr;
    }

    return -1;
}

int main()
{
    node *root = NULL;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    // root->left->right = new node(5);

    // root->right->left = new node(6);
    // root->right->right = new node(7);

    printNodesAtk(root, root->left /*talking about the node having value 2*/, 2);
}