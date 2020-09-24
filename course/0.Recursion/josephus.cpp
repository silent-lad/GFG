#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll josephus(ll n, ll k)
{
    if (n == 1)
    {
        return 0;
    }

    return (josephus(n - 1, k) + k) % n;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    cout << josephus(n, k) << endl;
}