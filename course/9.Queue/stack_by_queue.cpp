#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long

class Stack
{
    queue<ll> q1, q2;

    ll top()
    {
        return q1.front();
    }
    void pop()
    {
        q1.pop();
    }
    ll size()
    {
        return q1.size();
    }

    void push(ll x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
};

int main()
{
}