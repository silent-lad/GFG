#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n], prefix[n];
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {

        cin >> arr[i];
        if (i == 1)
        {
            prefix[i] = arr[i];
        }
        else
        {
            prefix[i] = prefix[i - 1] + arr[i];
            s.insert(prefix[i]);
        }
    }
    if (s.size() < n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}