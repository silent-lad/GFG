#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define ll long long

void pushStack(ll x, stack<ll> main, stack<ll> aux)
{
    if (main.empty())
    {
        main.push(x);
        aux.push(x);
    }
    else
    {
        if (aux.top() > x)
        {
            aux.push(x);
        }
        main.push(x);
    }
}

void popStack(stack<ll> main, stack<ll> aux)
{
    if (main.top() == aux.top())
    {
        aux.pop();
    }
    main.pop();
}

ll getMin(stack<ll> aux)
{
    return aux.top();
}

int main()
{
    stack<ll> main;
    stack<ll> aux;
}