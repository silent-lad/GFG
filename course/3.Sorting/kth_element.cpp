#include <bits/stdc++.h>
using namespace std;

#define ll long long

void kth_smallest(ll arr[], ll l, ll r, ll k)
{
    ll partition_index = lomuto(arr, l, r);
    if (partition_index == k - 1)
    {
        return arr[partition_index];
    }
    else if (partition_index > k - 1)
    {
        return kth_smallest(arr, l, partition_index - 1, k);
    }
    else
    {
        return kth_smallest(arr, partition_index + 1, r, k);
    }
}

int main()
{
}