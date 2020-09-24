#include <bits/stdc++.h>
using namespace std;

#define ll long long

void traversal(ll **arr, ll n, ll m)
{
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ll **arr;
    ll n, m;
    cin >> n >> m;
    arr = new ll *[n];
    for (ll i = 0; i < n; i++)
    {
        arr[i] = new ll[m];
        for (ll j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    traversal(arr, n, m);
}