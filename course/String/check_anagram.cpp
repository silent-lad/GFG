#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool checkAnagram(string s1, string s2)
{
    ll arr[26];
    memset(arr, 0, 26);
    for (char x : s1)
    {
        arr[x - 'a']++;
    }
    for (char x : s2)
    {
        arr[x - 'a']--;
    }
    for (int i : arr)
    {
        if (i != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
}