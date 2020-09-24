#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<ll> arr;
    unordered_set<ll> s;
    ll n;
    cin >> n;
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        ll tempRes = 0;
        cin >> arr[i];
        ll currElement = arr[i];
        while (s.count(currElement - 1))
        {
            tempRes++;
            currElement--;
        }
        currElement = arr[i];
        while (s.count(currElement + 1))
        {
            tempRes++;
            currElement++;
        }
        if (tempRes > res)
        {
            res = tempRes;
        }
    }
}