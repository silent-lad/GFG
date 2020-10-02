#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

unordered_map<ll, Node *> mp;

bool top_view(Node *root, ll distance = 0)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        while (q.front() != NULL)
        {
            Node *temp = q.front();
            if (mp[distance] != NULL)
            {
                mp[distance] = root;
            }
            q.pop();
        }
        cout << endl;
    }
}

int main()
{
}