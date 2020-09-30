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

ll findHeight(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return (findHeight(head->left)) > (findHeight(head->right)) ? (findHeight(head->left) + 1) : (findHeight(head->right) + 1);
    }
}

int main()
{
}