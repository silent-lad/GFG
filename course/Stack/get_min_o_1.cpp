#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define ll long long

void pushStack(ll x, stack<ll> main, ll min)
{
    if (x < min)
    {
        if (main.empty())
        {
            main.push(x);
            min = x;
        }
        else
        {
            ll temp = x;
            x = x - min;
            min = temp;
            main.push(x);
        }
    }
    else
    {
        main.push(x);
    }
}

void popStack(stack<ll> main, ll min)
{
    if (main.top() < 0)
    {
        min = min - main.top();
    }
    main.pop();
}

int main()
{
    stack<ll> main;
    ll min;
}