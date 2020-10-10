#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll prims(vector<ll> graph[], ll V)
{
    ll key[V];
    memset(key, LONG_MAX, V);
    key[0] = 0;
    bool mset[V];
    memset(mset, false, V);
    ll res = 0;
    for (ll cnt = 0; cnt < V; cnt++)
    {
        ll u = -1;
        for (ll i = 0; i < V; i++)
            if (!mset[i] && (u == -1 || key[i] < key[u]))
                u = i;
        mset[u] = true;
        res += key[u];
        for (ll v = 0; v < V; v++)
        {
            if (graph[u][v] && !mset[v])
            {
                key[v] = min(key[v], graph[u][v]);
            }
        }
    }
    return res;
}

int main()
{
}