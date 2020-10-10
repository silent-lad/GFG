#include <bits/stdc++.h>
using namespace std;

#define ll long long

void top_sort(vector<ll> adj[], ll visited[], ll indegree[], ll V)
{
    queue<ll> q;
    for (ll i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            cout << i << endl;
            q.push(i);
        }
    }
    while (!q.empty())
    {
        ll curr = q.front();
        q.pop();
        for (ll x : adj[curr])
        {
            indegree[x]--;
            if (indegree[x] == 0)
            {
                cout << x << endl;
                q.push(x);
            }
        }
    }
}

void top_sort_helper(vector<ll> adj[], ll V)
{
    bool visited[V];
    ll indegree[V];
    for (ll i = 0; i < V; i++)
    {
        indegree[i] = adj[i].size();
    }
}

int main()
{
}