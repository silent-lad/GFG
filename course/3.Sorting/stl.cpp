#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll arr[5] = {1, 5, 2, 8, 3};
    sort(arr, arr + 5);
    for (ll i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + 5, greater<long long>());
    for (ll i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> v = {5, 7, 2, 9, 112};
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " " << endl;
    }
}