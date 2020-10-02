#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

unordered_map<ll, ll> mp;

bool vertical_sum(Node *root, ll distance = 0)
{
    if (root == NULL)
    {
        return;
    }
    mp[distance] += root->value;

    vertical_sum(root->left, distance - 1);
    vertical_sum(root->right, distance + 1);
}

int main()
{
}