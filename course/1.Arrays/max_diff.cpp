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
    ll min = LONG_MAX;
    ll maxDiff = LONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] - min > maxDiff)
        {
            maxDiff = arr[i] - min;
        }
    }
}