#include <bits/stdc++.h>
using namespace std;

#define ll long long

void merge2Arrays(ll arr[], ll n, ll arr2[], ll m)
{
    ll iter1 = 0;
    ll iter2 = 0;

    while (iter1 + iter2 != m + n - 2)
    {
        if (arr[iter1] > arr2[iter2] || iter1 == n - 1)
        {
            cout << arr2[iter2] << endl;
            iter2++;
        }
        else
        {
            cout << arr[iter1] << endl;
            iter1++;
        }
    }
}

int main()
{
    ll n, m;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> m;
    ll arr2[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    merge2Arrays(arr, n, arr2, m);
}