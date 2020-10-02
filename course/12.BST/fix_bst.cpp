#include <bits/stdc++.h>
using namespace std;

#define ll long long

//
//   WRONG APPROACH
//
//

struct Node
{
    ll value;
    Node *left;
    Node *right;
    ll lCount;
};

Node *first = NULL;
Node *second = NULL;

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left != NULL)
    {
        if (root->left->value > root->value)
        {
            if (first != NULL)
            {
                first = root;
                return;
            }
            else
            {
                second = root;
                return;
            }
        }
    }
    if (root->right != NULL)
    {
        if (root->right->value < root->value)
        {
            if (first != NULL)
            {
                first = root;
                return;
            }
            else
            {
                second = root;
                return;
            }
        }
    }
}

void fixBST(Node *root)
{
    inorder(root);
    if (first == NULL)
    {
        return;
    }
    else if (second == NULL)
    {
        Node *temp = first;
        first = second;
        second = temp;
        acs
    }
}

int main()
{
}