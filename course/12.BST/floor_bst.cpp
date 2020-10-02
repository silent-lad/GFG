#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

Node *findFloor(ll x, Node *root)
{
    Node *temp = root;
    Node *res = NULL;
    while (temp != NULL)
    {
        if (temp->value == x)
        {
            return temp;
        }
        else if (temp->value > x)
        {
            temp = temp->left;
        }
        else
        {
            res = temp;
            temp = temp->right;
        }
    }
    return res;
}

int main()
{
}