#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll maxLen = 1;
    ll currLen = 1;
    ll currEl;
    cin >> currEl;
    bool isOdd = currEl % 2;

    for (ll i = 1; i < n; i++)
    {
        cin >> currEl;
        if (currEl % 2 == 0 && isOdd)
        {
            isOdd = false;
            currLen++;
        }
        else if (currEl % 2 == 1 && !isOdd)
        {
            isOdd = true;
            currLen++;
        }
        else
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }
            currLen = 1;
            isOdd = currEl % 2;
        }
    }
}