#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define ll long long

int main()
{
    stack<ll> s;
    unordered_map<ll, ll> mp;

    ll n;
    cin >> n;

    ll span[n];
    for (ll i = 0; i < n; i++)
    {
        ll currEl;
        cin >> currEl;
        mp.insert({currEl, i});
        while (!s.empty())
        {
            if (s.top() < currEl)
            {
                s.pop();
            }
            else
            {
                break;
            }
        }
        if (!s.empty())
        {
            span[i] = i - mp[s.top()];
        }
        else
        {
            span[i] = i + 1;
        }
        cout << span[i] << " ";
        s.push(currEl);
    }
}