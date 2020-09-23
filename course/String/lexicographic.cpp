#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    ll res = 0;
    ll cnt[26] = {0};
    ll fact = 1;
    for (ll i = 0; i < s.length(); i++)
    {
        cnt[s[i] - 'a']++;
        fact *= (i + 1);
    }
    for (ll i = 0; i < s.length(); i++)
    {
        fact /= (s.length() - i);
        ll currCount = 0;
        for (ll j = 0; j < s[i] - 'a'; j++)
        {
            if (cnt[j] != 0)
            {
                currCount++;
            }
        }
        res += (currCount * fact);
        cnt[s[i] - 'a']--;
    }
}