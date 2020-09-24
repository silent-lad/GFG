#include <bits/stdc++.h>
using namespace std;

#define ll long long

void bubbleSort(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                ll temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    ll n = 5;
    ll arr[] = {12, 8, 4, 56, 3};
    bubbleSort(arr, n);

    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}