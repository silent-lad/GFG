#include <bits/stdc++.h>
using namespace std;

#define ll long long

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

void inorder(Node *head)
{
    if (head->left != NULL)
        inorder(head->left);
    cout << head->data << endl;
    if (head->right != NULL)
        inorder(head->right);
}

void preorder(Node *head)
{
    cout << head->data << endl;
    if (head->left != NULL)
        inorder(head->left);
    if (head->right != NULL)
        inorder(head->right);
}

void postorder(Node *head)
{
    if (head->left != NULL)
        inorder(head->left);
    if (head->right != NULL)
        inorder(head->right);
    cout << head->data << endl;
}

int main()
{
}