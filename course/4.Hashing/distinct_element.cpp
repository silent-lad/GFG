#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    unordered_set<ll> s;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll el;
        cin >> el;
        s.insert(el);
    }
    cout << s.size() << endl;
}