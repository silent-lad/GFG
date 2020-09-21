#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct location
{
    int x, y;
};

bool myComparison(location l1, location l2)
{
    return l1.y > l2.y;
}

int main()
{
    location arr[3] = {{2, 5}, {5, 7}, {2, 0}};
    sort(arr, arr + 3, myComparison);

    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }
}
