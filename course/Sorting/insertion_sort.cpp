#include <bits/stdc++.h>
using namespace std;

#define ll long long

void insertion_sort(ll arr[], ll n)
{
    ll insertionPoint = 1;
    for (ll i = 1; i < n; i++)
    {
        ll key = arr[i];
        ll j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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