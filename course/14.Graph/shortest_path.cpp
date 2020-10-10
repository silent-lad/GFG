#include <bits/stdc++.h>
using namespace std;

#define ll long long

void shortestPath(vector<ll> adj[], ll visited[], ll s)
{
    ll dist[5] = {0};
    ll distance = 0;
    dist[s] = 0;
    queue<ll> q;
    q.push(s);
    while (!q.empty())
    {
        distance++;
        for (ll x : adj[s])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x]++;
                dist[x] = distance;
            }
        }
    }
}

int main()
{
}