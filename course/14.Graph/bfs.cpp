#include <bits/stdc++.h>
using namespace std;

#define ll long long

void BFS(vector<ll> adj[], ll n)
{
    queue<ll> q;
    q.push(1);
    ll visited[n];
    memset(visited, 0, n);
    while (!q.empty())
    {
        ll curr = q.front();
        visited[curr] = 1;
        q.pop();
        for (auto i = adj[curr].begin(); i != adj[curr].end(); i++)
        {
            if (!visited[*i])
            {
                q.push(*i);
            }
        }
    }
}

int main()
{
}