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

void layer_traversal(Node *head)
{
    Node *curr = head;
    queue<Node *> q;
    q.push(head);
    while (!q.empty())
    {
        curr = q.front();
        cout << curr->data << " ";
        q.pop();
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int main()
{
}