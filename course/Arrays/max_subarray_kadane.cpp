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
    ll maxSum[n];
    maxSum[0] = arr[0];
    ll maxSubSum = arr[0];
    for (ll i = 1; i < n; i++)
    {
        if (maxSum[i - 1] + arr[i] > arr[i])
        {
            maxSum[i] = arr[i] + maxSum[i - 1];
        }
        else
        {
            maxSum[i] = arr[i];
        }
        if (maxSubSum < maxSum[i])
        {
            maxSubSum = maxSum[i];
        }
    }
    cout << maxSubSum << endl;
}