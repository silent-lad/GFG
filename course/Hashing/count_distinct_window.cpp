#include <bits/stdc++.h>
using namespace std;

#define ll long long

//WRONGGGGGGGG!!!!!!
int main()
{
    ll n, k;
    cin >> n;
    cin >> k;
    ll arr[n];
    unordered_set<ll> s;
    ll prefix[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (s.count(arr[i]))
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
        if (i == 0)
        {
            prefix[i] == arr[i];
        }
        else
        {
            prefix[i] == arr[i] + prefix[i - 1];
        }
    }
    for (ll i = k - 1; i < n; i++)
    {
        cout << prefix[i] - prefix[]
    }
}