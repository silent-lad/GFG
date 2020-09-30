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

ll max_element(Node *head)
{
    if (head == NULL)
    {
        return -1;
    }

    return max(max_element(head->right), max_element(head->left), head->data);
}

int main()
{
}