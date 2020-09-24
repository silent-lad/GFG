#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define ll long long

int main()
{
    stack<ll> s;
    cout << s.size() << endl;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}