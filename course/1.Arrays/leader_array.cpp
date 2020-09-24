#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll currLeader = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[n - 1 - i] > currLeader)
        {
            cout << arr[n - 1 - i] << endl;
            currLeader = arr[n - 1 - i];
        }
    }
}