#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll firstTripIndex(ll *petrol, ll *distance)
{
    int start = 0, curr_petr = 0;
    int prev_petr = 0;

    for (ll i = 0; i < sizeof(petrol) / sizeof(ll); i++)
    {
        curr_petr += petrol[i] - distance[i];

        if (curr_petr <= 0)
        {
            start = i + 1;
            prev_petr += curr_petr;
            curr_petr = 0;
        }
    }

    return ((curr_petr + prev_petr > 0) ? (start) : -1);
}

int main()
{
}