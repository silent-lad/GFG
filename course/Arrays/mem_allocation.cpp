#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    //stored in function stack. poped after function returns
    int arr[100] = {0};

    //Stored in heap ,there after function execution too
    int *arr2 = new int[100];

    free(arr2);
}