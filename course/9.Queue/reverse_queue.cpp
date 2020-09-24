#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long

queue<ll> reverse_queue(queue<ll> q)
{
    stack<ll> aux;
    while (!q.empty())
    {
        aux.push(q.front());
        q.pop();
    }

    while (!aux.empty())
    {
        q.push(aux.top());
        aux.pop();
    }
    return q;
}

queue<ll> recursive_reverse(queue<ll> q)
{
    if (q.empty())
    {
        return q;
    }
    ll el = q.front();
    q.pop();
    q = recursive_reverse(q);
    q.push(el);
    return q;
}

int main()
{
    queue<ll> q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(15);
    cout << q.front() << endl;
    q = recursive_reverse(q);
    cout << q.front() << endl;
}