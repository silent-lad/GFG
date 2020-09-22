#include <bits/stdc++.h>
using namespace std;

#define ll long long

//todo - Do not generalise
void bTraversal(ll **arr, ll n, ll m)
{
    for (ll i = 0; i < 4; i++)
    {
        ll limiter;
        ll direction;
        if (i < 2)
        {
            direction = 0;
        }
        else
        {
            direction = 1;
        }
        if (i % 2 == 0)
        {
            limiter = n;
        }
        else
        {
            limiter = m;
        }
        for (ll j = 1; j < limiter; j++)
        {
            if (direction)
            {
                cout << arr[limiter][]
            }
        }
    }
}

int main()
{
}