#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int evensum(int i, int a[], int n)
{
    if (i < n && a[i] % 2 == 0)
    {
        return a[i] + evensum(i + 1, a, n);
    }
    if (i < n && a[i] % 2 != 0)
    {
        return evensum(i + 1, a, n);
    }
    if (i == n)
    {
        return 0;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 8;
    int a[] = {1, 2, 4, 3, 6, 7, 8, 1};
    int sum = 0;
    sum = evensum(0, a, n);
    cout << sum;
    return 0;
}