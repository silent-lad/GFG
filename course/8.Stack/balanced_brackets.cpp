#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define ll long long

int main()
{
    stack<ll> s;
    string str;
    cin >> str;
    for (ll i = 0; i < str.length(); i++)
    {
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
            {
                cout << "NOT BALANCED" << endl;
                break;
            }
            else
            {
                if (str[i] == ')')
                {
                    if (s.top() == '(')
                    {
                        s.pop();
                    }
                    else
                    {
                        cout << "NOT BALANCED" << endl;
                        break;
                    }
                }
                else if (str[i] == '}')
                {
                    if (s.top() == '{')
                    {
                        s.pop();
                    }
                    else
                    {
                        cout << "NOT BALANCED" << endl;
                        break;
                    }
                }
                else if (str[i] == ']')
                {
                    if (s.top() == '[')
                    {
                        s.pop();
                    }
                    else
                    {
                        cout << "NOT BALANCED" << endl;
                        break;
                    }
                }
            }
        }
    }
    cout << "BALANCED" << endl;
}