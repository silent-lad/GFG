#include <bits/stdc++.h>
using namespace std;

#define ll long long

void spiralTraversal(ll **arr, ll n, ll m)
{
    ll top = 0;
    ll left = 0;
    ll right = m - 1;
    ll bottom = n - 1;
    while (top >= bottom && right >= left)
    {
        for (ll i = left; i < right; i++)
        {
            cout << arr[top][i] << " ";
            top++;
        }

        for (ll i = top; i < bottom; i++)
        {
            cout << arr[i][right] << " ";
            right--;
        }

        for (ll i = right; i > left; i--)
        {
            cout << arr[bottom][i] << " ";
            bottom--;
        }

        for (ll i = bottom; i < top; i--)
        {
            cout << arr[i][left] << " ";
            left++;
        }
    }
}