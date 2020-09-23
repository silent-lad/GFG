#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    if (str1.length() != str2.length())
    {
        return false;
    }
    else if ((str1 + str1).find(str2) == string::npos)
    {
        return false;
    }
    return true;
}