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

void zigzag_Traversal(node *root)
{
    if (root == NULL)
        return;

    stack<node *> current_level;
    stack<node *> next_level;

    bool left_to_right = true;
    current_level.push(root);

    while (!current_level.empty())
    {
        node *temp = current_level.top();
        current_level.pop();

        if (temp != NULL)
        {
            cout << temp->data << " ";

            if (left_to_right)
            {
                if (temp->left)
                    next_level.push(temp->left);

                if (temp->right)
                    next_level.push(temp->right);
            }

            else // right_to_left
            {
                if (temp->right)
                    next_level.push(temp->right);

                if (temp->left)
                    next_level.push(temp->left);
            }
        }

        if (current_level.empty())
        {
            left_to_right = !left_to_right;
            swap(current_level, next_level);
        }
    }
}

int main()
{
    node *root = NULL;
    root = new node(12);
    root->left = new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->left->right = new node(10);
    /* print()
  left->right        12
                   /    \
                  9       15    left<-right
                /   \
  left->right  5     10
    */
    zigzag_Traversal(root);

    return 0;
}
// t(n) = O(2n) = O(n)
