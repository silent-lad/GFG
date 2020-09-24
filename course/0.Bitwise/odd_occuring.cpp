#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sumXor = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sumXor = sumXor ^ arr[i];
    }
    cout << sumXor << endl;
}