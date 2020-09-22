#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(9);
    s.insert(234);
    s.insert(0);

    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    if (s.find(0) != s.end())
    {
        cout << "found 0" << endl;
    }

    if (s.count(234))
    {
        cout << "found 234" << endl;
    }
    cout << s.size() << endl;
    s.erase(9);
    cout << s.size() << endl;
    s.clear();
    cout << s.size() << endl;

    //note - Erase works for range too
    //s.erase(iter, s.end());
    s.erase(s.begin(), s.end());
}