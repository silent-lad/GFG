#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

queue<Node *> q;

bool level_order(Node *root)
{
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        while (q.front() != NULL)
        {
            Node *temp = q.front();
            cout << temp->value << endl;
            q.pop();
        }
        cout << endl;
    }
}

int main()
{
}