#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll searchInfiniteArray(ll arr[], ll element)
{
    ll index = 1;
    while (arr[index] < element)
    {
        index = index * 2;
    }
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}