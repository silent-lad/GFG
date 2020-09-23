#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll n = s.length();
    ll arr[n];
    ll max = 0;
    unordered_map<char, ll> map;
    for (ll i = 0; i < n; i++)
    {
        if (map.count(s[i]))
        {
            arr[i] = i - map[s[i]];
        }
        else
        {
            if (i == 0)
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = arr[i - 1] + 1;
            }
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        map[s[i]] = i;
    }
    cout << max << endl;
}