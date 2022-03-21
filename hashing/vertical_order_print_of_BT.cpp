#include <bits/stdc++.h>
using namespace std;

#define vec vector<int>

struct node
{
public:
    int data;
    node* left, * right;

    node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};

void vertical_order(node* root, int hdis, map<int, vec>& mp)
{
    if (root == NULL)
        return;

    mp[hdis].push_back(root->data);
    vertical_order(root->left, hdis - 1, mp);
    vertical_order(root->right, hdis + 1, mp);
    
}

int main()
{
    node* root;
    // 10 7 4 3 11 14 6
    root = new node(10);
    root->left = new node(7);
    root->right = new node(4);
    root->left->left = new node(3);
    root->left->right = new node(11);
    root->right->left = new node(14);
    root->right->right = new node(6);

    int horizontal_dist = 0;
    map<int, vec> res;
    vertical_order(root, horizontal_dist, res);

    for (auto i : res)
    {
        // cout << i.first << " ";
        for (auto j : i.second)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}