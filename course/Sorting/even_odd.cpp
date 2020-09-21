#include <bits/stdc++.h>
using namespace std;

#define ll long long

void partition(ll arr[], ll n)
{
    ll i = 0;
    ll j = 0;
    while (j < n - 1)
    {
        if (arr[j] % 2 == 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
        j++;
    }
}

ll lomuto(ll arr[], ll l, ll h)
{
    ll inter = -1;
    //pivot is last element
    for (ll i = 0; i < h - 1; i++)
    {
        if (arr[i] % 2 == 0)
        {
            inter++;
            swap(arr[i], arr[inter]);
        }
    }
    swap(arr[inter + 1], arr[h]);
    return inter + 1;
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    lomuto(arr, 0, n);
    for (ll i = 0; i < n; i++)
    {
        cout << arr[n] << " ";
    }
}