#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    Node *left;
    Node *right;
    ll val;

    Node(ll x)
    {
        left = NULL;
        right = NULL;
        val = x;
    }
};

Node *createSegmentTreeNode(ll arr[], ll l, ll h)
{
    Node *curr;
    if (l != h)
    {
        Node *left = createSegmentTreeNode(arr, l, h / 2);
        Node *right = createSegmentTreeNode(arr, (h / 2) + 1, h);
        curr->val = left->val + right->val;
        curr->left = left;
        curr->right = right;
        return curr;
    }
    else
    {
        return new Node(arr[l]);
    }
}

int main()
{
}