#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool _dfs(vector<ll> adj[], bool visited[], ll s, bool recSt[])
{
    visited[s] = true;
    recSt[s] = true;
    for (ll x : adj[s])
    {
        if (visited[x] && _dfs(adj, visited, x, recSt))
        {
            return true;
        }
        else if (recSt[x])
        {
            return true;
        }
    }
    recSt[s] = false;
    return false;
}

bool DFS(vector<ll> adj[])
{
    bool visited[5] = {false};
    bool recSt[5] = {false};

    for (ll i = 0; i < 5; i++)
    {
        if (visited[i] == false)
        {
            if (_dfs(adj, visited, i, recSt))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
}