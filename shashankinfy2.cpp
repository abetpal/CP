#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve()
{

    ll n, sum = 0, cnt = 0;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll avg = (sum + n - 1) / n;
    sort(v.begin(), v.end());
    ll i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] >= avg)
            i++;
        else if (v[j] <= avg)
            j--;
        else
        {
            ll a = avg - v[i];
            ll b = v[j] - avg;
            cnt += min(a, b);
            v[i] += min(a, b);
            v[j] -= min(a, b);
        }
    }
    ll maxEle = INT_MIN;
    for (ll i = 0; i < n; i++)
        maxEle = max(maxEle, v[i]);
    for (ll i = 0; i < n; i++)
        cnt += maxEle - v[i];

    return cnt;
}

int main()
{
    cout << solve();
    return 0;
}