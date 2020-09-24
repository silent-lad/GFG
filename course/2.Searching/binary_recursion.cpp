#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll binarySearch(ll arr[], ll element, ll start, ll end)
{
    if (start > end)
    {
        return -1;
    }
    ll mid = (start + end) / 2;
    if (arr[mid] == element)
    {
        return mid;
    }
    else if (arr[mid] > element)
    {
        return binarySearch(arr, element, start, mid - 1);
    }
    else
    {
        return binarySearch(arr, element, mid + 1, end);
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