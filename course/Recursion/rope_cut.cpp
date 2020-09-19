#include <bits/stdc++.h>
using namespace std;

#define ll long long

int maxRopeCut(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int cutACnt = maxRopeCut(n - a, a, b, c);
    int cutBCnt = maxRopeCut(n - b, a, b, c);
    int cutCCnt = maxRopeCut(n - c, a, b, c);

    int largest = cutACnt > cutBCnt ? (cutACnt > cutCCnt ? cutACnt : cutCCnt) : (cutBCnt > cutCCnt ? cutBCnt : cutCCnt);
    if (largest == -1)
    {
        return -1;
    }
    return largest + 1;
}

int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << maxRopeCut(n, a, b, c);
}