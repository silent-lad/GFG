#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n], prefix = 0;
    unordered_map<ll, ll> mp;
    ll h = -1, l = -1;
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != 1)
        {
            arr[i] = -1;
        }
        prefix += arr[i];
        if (prefix == 0)
        {
            l = 0;
            h = i;
            res = h;
        }
        if (mp.find(prefix) != mp.end())
        {
            if (i - mp[prefix] > res)
            {
                l = mp[prefix];
                h = i;
                res = i - mp[prefix];
            }
        }
    }
}