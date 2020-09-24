#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long

int main()
{
    queue<ll> q;
    q.push(10);
    q.push(12);
    q.push(23);

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();
    cout << q.front() << endl;
}