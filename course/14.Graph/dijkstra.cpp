#include <bits/stdc++.h>
using namespace std;

#define ll long long

void dijkstra(vector<ll> graph[], ll V)
{
    ll dist[V];
    memset(dist, LONG_MAX, V);
    dist[V] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> setDist;
    setDist.push({0, 0});
    while (!setDist.empty())
    {
        ll currDistance = setDist.top()[0];
        ll currIndex = setDist.top()[1];
        setDist.pop();
        for (ll i = 0; i < V; i++)
        {
            if (graph[currIndex][i] && dist[i] > currDistance + graph[currIndex][i])
            {
                dist[i] = currDistance + graph[currIndex][i];
                priority_queue.push(make_pair(dist[i], i));
            }
        }
    }
}

int main()
{
}