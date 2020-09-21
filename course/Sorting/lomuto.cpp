#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lomuto(ll arr[], ll l, ll h)
{
    ll inter = 0;
    //pivot is last element
    for (ll i = 0; i < h - 1; i++)
    {
        if (arr[i] = < arr[h])
        {
            swap(arr[i], arr[inter]);
            inter++;
        }
    }
    swap(arr[inter + 1], arr[h]);
    return inter + 1;
}

int main()
{
}