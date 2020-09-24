#include <bits/stdc++.h>
using namespace std;

#define ll long long

void intersect(ll arr1[], ll arr2[], ll len1, ll len2)
{
    ll iter1 = 0, iter2 = 0;
    ll lastSameElement = -1;
    while (iter1 < len1 && iter2 < len2)
    {
        if (arr1[iter1] > arr2[iter2])
        {
            iter2++;
        }
        else if (arr1[iter1] > arr2[iter2])
        {
            iter1++;
        }
        else
        {
            if (lastSameElement != arr1[iter1])
            {
                lastSameElement = arr1[iter1];
                cout << lastSameElement << endl;
            }
            iter1++;
            iter2++;
        }
    }
}

int main()
{
    ll arr[7] = {1, 2, 3, 6, 8, 9, 45};
    ll arr2[5] = {1, 5, 10, 11, 45};
}