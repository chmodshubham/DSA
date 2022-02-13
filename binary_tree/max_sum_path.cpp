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

int max_path_sum_utility(node *root, int &ans)
{
    if (root == NULL)
        return 0;

    int left = max_path_sum_utility(root->left, ans);
    int right = max_path_sum_utility(root->right, ans);

    int nodeMax = max(max(root->data, root->data + left + right) /*(root->data + left + right) gives the largest sumPath if all nodes are +ve */, max(root->data + left, root->data + right));

    ans = max(ans, nodeMax);                                                         // didn't add root node till now
    int singlePathSum = max(root->data, max(root->data + left, root->data + right)); // we create this variable in order to return the pathSum in which root node can be added further but didn't include (root->data + left + right) to avoid the CompletePathSum or, in this condition, ancestor/root node cannot be added further

    // for the root part, paths can be
    // 4-2-1      = 7
    // 4-2-1-3    = 10
    // 4-2-1-3-6  = 16
    // 4-2-1-3-7  = 17   (max)
    // 2-1        = 3
    // 2-1-3      = 6
    // 2-1-3-6    = 12
    // 2-1-3-7    = 13
    // 1-3        = 4
    // 1-3-6      = 10
    // 1-3-7      = 11

    return singlePathSum;
}

int max_sum_path_from_oneNode_to_another(node *root)
{
    int ans = INT_MIN;
    max_path_sum_utility(root, ans);
    return ans;
}

int main()
{
    node *root = NULL;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    // root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << max_sum_path_from_oneNode_to_another(root);
}