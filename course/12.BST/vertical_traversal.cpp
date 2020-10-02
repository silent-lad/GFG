#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

unordered_map<ll, vector<ll>> mp;

bool vertical_traversal(Node *root, ll distance = 0)
{
    if (root == NULL)
    {
        return;
    }
    mp[distance].push_back(root->value);

    vertical_traversal(root->left, distance - 1);
    vertical_traversal(root->right, distance + 1);
}

int main()
{
}