#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n;
    cin >> k;
    ll arr[n], prefix = 0;
    unordered_map<ll, ll> mp;
    ll res = 0, h = -1, l = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefix += arr[i];
        if (mp.find(arr[i] - k) != mp.end())
        {
            if (i - mp[arr[i] - k] > res)
            {
                res = i - mp[arr[i] - k] h = i;
                l = mp[arr[i] - k];
            }
        }
        mp[prefix] = i;
    }
}