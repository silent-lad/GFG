#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Heap
{
    int *arr;
    int size;
    int capacity;

    Heap(int c)
    {
        arr = new int[c];
        capacity = c;
        size = 0;
    };

    int left(int i) { return ((2 * i) + 1); }
    int right(int i) { return ((2 * i) + 2); }
    int parent(int i) { return (i - 1) / 2; };

    void insert(int x)
    {
        arr[size++] = x;
        int i = size - 1;
        while (parent(i) > arr[i] || i == 0)
        {
            swap(arr[(i - 1) / 2], arr[i]);
            i = (i - 1) / 2;
        }
    }
};

int main()
{
}