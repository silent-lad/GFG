#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s1;
    cin >> s1;
    unordered_set<char> s;
    for (ll i = s1.length() - 1; i >= 0; i--)
    {
        if (s.count(s1[i]))
        {
            s.erase(s1[i]);
        }
    }
}