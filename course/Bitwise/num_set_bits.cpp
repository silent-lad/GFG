#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll num;
    cin >> num;
    ll cnt;
    while (num)
    {
        if (num % 2)
        {
            cnt++;
        }
        num = num / 2;
    }
    cout << cnt << endl;
}

ll brianKerningham(ll num)
{
    ll cnt = 0;
    while (num)
    {
        num = (num & (num - 1));
        cnt++;
    }
    return cnt;
}