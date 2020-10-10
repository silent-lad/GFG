#include <bits/stdc++.h>
using namespace std;

#define ll long long

void DFS(vector<ll> adj[], vector<ll> visited, ll s)
{
    visited[s] = 1;

    for (auto i = adj[s].begin(); i != adj[s].end(); i++)
    {
        if (!visited[*i])
        {
            DFS(adj, visited, *i);
        }
    }
}

int main()
{
}