#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll data;
    Node *left;
    Node *right;
};

Node *LCA(Node *root, ll a, ll b)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == a || root->data == b)
    {
        return root;
    }
    Node *lca1 = LCA(root->left, a, b);
    Node *lca2 = LCA(root->right, a, b);

    if (lca1 != NULL && lca2 != NULL)
    {
        return root;
    }
    if (lca1 == NULL)
    {
        return lca2;
    }
    else
    {
        return lca1;
    }
}

int main()
{
}