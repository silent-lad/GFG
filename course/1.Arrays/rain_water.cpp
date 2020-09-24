#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll totalWater = 0;
    ll lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] > lmax[i - 1])
        {
            lmax[i] = arr[i];
        }
        else
        {
            lmax[i] = lmax[i - 1];
        }
    }
    rmax[n - 1] = arr[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        if (arr[i] > rmax[i + 1])
        {
            rmax[i] = arr[i];
        }
        else
        {
            rmax[i] = rmax[i + 1];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        totalWater += lmax[i] > rmax[i] ? rmax[i] - arr[i] : lmax[i] - arr[i];
    }

    cout << totalWater << endl;
}
