#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll el;
        cin >> el;
        if (mp.find(el) == mp.end())
        {
            mp[el] = 1;
        }
        else
        {
            mp[el] = mp[el] + 1;
        }
    }

    for (auto iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    }
}