#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n;
    cin >> k;
    ll arr[n];
    unordered_map<ll, ll> mp;
    ll prefixSum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefixSum += arr[i];
        if (mp.find(arr[i] - k) != mp.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            mp[arr[i]]++;
        }
    }
}