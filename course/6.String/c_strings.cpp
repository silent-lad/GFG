#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    char str[] = "gfg";
    char str1[] = {'b', 'x', 't'};

    cout << str << endl;

    cout << str1 << endl;

    strlen(str);
    strcmp(str, str1);

    char testStr[5];
    //won't work
    // testStr="sadfg"

    //will work
    strcpy(testStr, "asdss");
}