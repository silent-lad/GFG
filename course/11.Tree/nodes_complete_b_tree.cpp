#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll data;
    Node *left;
    Node *right;
};

ll count(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    ll lh = 0, rh = 0;
    Node *temp = root;
    while (temp->left != NULL)
    {
        lh++;
        temp = temp->left;
    }
    temp = root;
    while (temp->right != NULL)
    {
        rh++;
        temp = temp->right;
    }
    if (lh == rh)
    {
        return pow(2, lh) - 1;
    }
    else
    {
        return count(root->left) + count(root->right) + 1;
    }
}

int main()
{
}