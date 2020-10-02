#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
    ll lCount;
};

Node *Kth_smallest(ll k, Node *root)
{
    Node *temp = root;
    Node *res = NULL;

    if (temp->lCount + 1 == k)
    {
        return temp;
    }
    else if (temp->lCount + 1 < k)
    {
        return Kth_smallest(k, temp->right);
    }
    else
    {
        return Kth_smallest(k - (temp->lCount) - 1, temp->left);
    }
}

int main()
{
}