#include <bits/stdc++.h>
using namespace std;

#define ll long long

//wrong: onsider parent, and better solution DFS
bool cycle(vector<ll> adj[], ll n)
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
            else
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