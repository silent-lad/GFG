#include <bits/stdc++.h>
#include <stack>
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

void spiral(Node *root)
{
    stack<Node *> s;
    s.push(NULL);
    s.push(root);
    while (true)
    {
        if (s.top() != NULL)
        {
            Node *temp = s.top();
            s.pop();
        }
        else
        {
            continue;
        }
    }
}

int main()
{
}