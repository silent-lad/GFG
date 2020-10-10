#include <bits/stdc++.h>
using namespace std;

#define ll long long

void addEdge(vector<ll> adj[], ll a, ll b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int main()
{
    ll n = 5;
    vector<ll> adj[n];
    addEdge(adj, 1, 2);
}