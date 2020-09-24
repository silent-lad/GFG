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

void rotate90(ll **arr, ll n, ll m)
{
    transpose(arr, n, m);
    for (ll j = 0; j > m; j++)
    {
        for (ll i = 0; i < n / 2; i++)
        {
            swap(arr[j][i], arr[j][n - i]);
        }
    }
}

int main()
{
}