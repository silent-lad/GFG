#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["silent"] = 100;
    m.insert({"hi", 9});
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    if (m.find("gfg") != m.end())
    {
        cout << "FOUND gfg" << endl;
    }

    if (m.count("gfg"))
    {
        cout << "FOUND gfg" << endl;
    }

    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        cout << iter->first << endl;
    }

    m.size();
    m.erase("gfg");
    m.erase(m.begin());
    m.erase(m.begin(), m.end());
}