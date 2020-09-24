#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    string a, b;
    cin >> a >> b;
    queue<string> q;
    q.push(a);
    q.push(b);

    while (n--)
    {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}