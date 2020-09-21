#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll squareRootBinary(ll n)
{
    ll start = 1;
    ll end = n;
    ll ans = -1;
    while (start <= end)
    {
        ll mid = (start + end) / 2;
        if (mid * mid < n)
        {
            start = mid + 1;
            ans = mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        if (mid * mid == n)
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    ll n;
    cin >> n;
    cout << squareRootBinary(n) << endl;
}