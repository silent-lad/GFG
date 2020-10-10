#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define n 5

ll tree[4 * n];

ll createSegmentTreeNode(ll si, ll l, ll h, ll arr[])
{
    if (l == h)
    {
        tree[si] = arr[l];
        return arr[l];
    }
    else
    {
        tree[si] = createSegmentTreeNode(2 * si + 1, 0, h / 2, arr) + createSegmentTreeNode(2 * si + 2, h / 2 + 1, h, arr);
        return tree[si];
    }
}

ll getSumQuery(ll l, ll h, ll start, ll end, ll index)
{
    if (l > end || h < start)
        return 0;
    if (l < start && end > h)
        return tree[index];

    return getSumQuery(l, h, start, end / 2, 2 * index + 1) + getSumQuery(l, h, end / 2 + 1, end, 2 * index + 2);
}

void update(ll start, ll end, ll si, ll index, ll diff)
{
    if (index < start || index > end)
        return;
    tree[si] += tree[si] + diff;
    if (end > start)
    {
        update(start, end / 2, 2 * si + 1, index, diff);
        update(end / 2 + 1, end, 2 * si + 2, index, diff);
    }
}

int main()
{
    ll arr[5] = {2, 56, 2, 67, 4};
    createSegmentTreeNode(0, 0, n - 1, arr);
}