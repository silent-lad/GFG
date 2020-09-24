#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fillLPS(string str, ll lps[])
{
    ll i = 0;
    while (i < str.length())
    {
        if (i == 0)
        {
            lps[i] == 0;
            i++;
            continue;
        }
        ll len = lps[i - 1];
        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
        }
        else
        {
            if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
}

int main()
{
    string txt, pat;
    cin >> txt >> pat;
    ll lps[pat.length()];
    fillLPS(pat, lps);
    ll res = 0;
    ll patIndex = 0;
    ll matchLength = 0;
    for (ll i = 0; i < txt.length(); i++)
    {
        if (txt[i] == pat[patIndex])
        {
            matchLength++;
            patIndex++;
            if (matchLength == pat.length())
            {
                patIndex = lps[patIndex - 1];
                res++;
            }
        }
        else
        {
            if (patIndex != 0)
            {
                patIndex = lps[patIndex - 1];
            }
        }
    }
    cout << res << endl;
}