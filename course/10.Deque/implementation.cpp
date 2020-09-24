#include <bits/stdc++.h>
#include <deque>
using namespace std;

#define ll long long

int main()
{
    deque<ll> dq;
    dq.push_front(12);
    dq.push_front(13);
    dq.push_front(14);

    dq.push_back(12);
    dq.push_back(13);
    dq.push_back(14);

    for (auto x : dq)
    {
        cout << x << endl;
    }
    cout << dq.front() << " " << dq.back() << endl;
}