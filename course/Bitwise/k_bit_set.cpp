#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll num;
    cin >> num;
    ll k;
    cin >> k;
    num = num << (k - 1);
    if (num % 2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}