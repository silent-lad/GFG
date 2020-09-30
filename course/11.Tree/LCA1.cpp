#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    ll value;
    Node *left;
    Node *right;
};

vector<Node *> search(Node *root, ll x, vector<Node *> path)
{

    if (root->value == x)
    {
        path.push_back(root);
        return path;
    }
    else
    {
        if (root->left != NULL)
        {
            path.push_back(root);
            return search(root->left, x, path);
        }
        if (root->right != NULL)
        {
            path.push_back(root);
            return search(root->right, x, path);
        }
        if (root->left == NULL && root->right == NULL)
        {
            vector<Node *> temp;
            return temp;
        }
    }
}

ll LCA(Node *root, ll a, ll b)
{

    vector<Node *> pathA, pathB;
    pathA = search(root, a, pathA);
    pathB = search(root, a, pathB);

    for (auto x : pathA)
    {
    }
}

int main()
{
}