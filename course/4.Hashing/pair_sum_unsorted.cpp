#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll k;
    cin >> k;
    unordered_map<ll, ll> mp;
    bool flag = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mp[k - arr[i]])
        {
            flag = true;
        }
        mp[arr[i]] = 1;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}