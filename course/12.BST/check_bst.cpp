#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

bool isBST(ll l, ll h, Node *root)
{
    Node *temp = root;
    Node *res = NULL;
    if (temp == NULL)
    {
        return true;
    }
    if (temp->value < l || temp->value > h)
    {
        return false;
    }
    else
    {
        return isBST(l, root->value, temp->left) && isBST(root->value, h, temp->right);
    }
}

int main()
{
}