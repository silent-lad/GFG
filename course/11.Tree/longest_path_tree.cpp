#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll max(ll a, ll b, ll c)
{
    if (a >= b)
    {
        if (a >= c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b >= c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

ll max(ll a, ll b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

struct Node
{
    ll data;
    Node *left;
    Node *right;
    Node(ll x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
ll max_el = LONG_MIN;
ll height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + max(height(root->left), height(root->right));
}

ll height2(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        ll lh, rh;
        lh = height2(root->left);
        rh = height(root->right);
        ll diameter = 1 + lh + rh;
        if (max_el < diameter)
        {
            max_el = diameter;
        }
        return 1 + max(lh, rh);
    }
}

ll path(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        ll d1 = 1 + height(root->left) + height(root->right);

        ll d2 = path(root->left);
        ll d3 = path(root->right);

        return max(d1, d2, d3);
    }
}

int main()
{
}