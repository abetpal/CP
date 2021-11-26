//author: nobrakebicycle
//created: 26.11.2021 21:12:30
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int n_sub(ll int n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n, m, ans = 0;
        cin >> n >> m;
        ll int n_zero = n - m;
        ll int n_part = m + 1;
        if (m == 0)
        {
            ans = n_sub(n);
        }
        else if (m >= n / 2)
        {
            ans = n_zero;
        }
        else
        {
            ll int mx = ceil(n_zero * 1.0 / n_part);
            ll int mn = n_zero / n_part;
            if (n_zero < mx * n_part)
            {
                ll int diff = mx * n_part - n_zero;
                ans = diff * n_sub(mn);
                ans += (n_part - diff) * n_sub(mx);
            }
            else
            {
                ans = n_part * n_sub(mx);
            }
        }
        cout << ans << endl;
    }
}
