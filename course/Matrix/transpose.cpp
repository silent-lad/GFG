#include <bits/stdc++.h>
using namespace std;

#define ll long long

void transpose(ll **arr, ll n, ll m)
{
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{
}