#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string str = "geeksforgeeks";
    cout << str.length() << " ";
    str += "asdf";

    cout << str.substr(2, 5) << endl;
    cout << str.find("eks") << endl;

    string str2;
    getline(cin, str2); // for spaces in string

    for (char x : str)
    {
        cout << x << endl;
    }
}