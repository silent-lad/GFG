#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool subsetSum(ll arr[], ll sum, ll currSum = 0, ll index = 0)
{
    if (sum == 0)
    {
        return true;
    }
    ll length = sizeof(arr) / sizeof(arr[0]);
    if (index == length - 1 && currSum + arr[length - 1] == sum)
    {
        return true;
    }

    return subsetSum(arr, sum, currSum + arr[index], index + 1) | subsetSum(arr, sum, currSum, index + 1);
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
    ll sum;
    cin >> sum;
    cout << subsetSum(arr, sum) << endl;
}