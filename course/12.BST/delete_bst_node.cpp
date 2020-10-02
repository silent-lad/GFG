#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

Node *findSuccesor(ll x, Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left->value == x || root->right->value == x)
    {
        return root;
    }
    else
    {
        if (x > root->value)
        {
            return findSuccesor(x, root->right);
        }
        else
        {
            return findSuccesor(x, root->left);
        }
    }
}

void deleteNode(ll x, Node *root)
{
    Node *temp = findSuccesor(x, root);
    if (temp->right == NULL && temp->left == NULL)
    {
    }
}

int main()
{
}