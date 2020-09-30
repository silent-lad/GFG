#include <bits/stdc++.h>
#include <queue>
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

ll number_nodes(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    return number_nodes(head->right) + number_nodes(head->left) + 1;
}

int main()
{
}