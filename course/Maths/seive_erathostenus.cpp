#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll num;
    cin >> num;
    ll arr[num + 1];
    memset(arr, 0, num + 1);

    arr[1] = 1;
    for (ll i = 2; i * i <= num; i++)
    {
        if (arr[i] == 0)
        {
            for (ll j = i * i; j <= num; j += i)
            {
                arr[j] = 1;
            }
        }
    }

    for (ll i = 2; i <= num; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }
}