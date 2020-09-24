#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPalindrome(string s, int start, int end)
{

    if (end <= start)
    {
        return true;
    }
    if (s[end] == s[start])
    {
        return isPalindrome(s, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "abba";
    string b = "abxa";
    cout << isPalindrome(s, 0, s.length() - 1) << endl;
    cout << isPalindrome(b, 0, s.length() - 1) << endl;
}