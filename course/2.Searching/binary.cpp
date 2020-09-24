#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll start = 0;
    ll end = n - 1;
    ll element;
    cin >> element;
    while (start <= end)
    {
        ll mid = (start + end) / 2;
        if (arr[mid] == element)
        {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] > element)
        {
            end = mid - 1;
            continue;
        }
        else
        {
            start = mid + 1;
            continue;
        }
    }
    cout << -1 << endl;
    return 0;
}