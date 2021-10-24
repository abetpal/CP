//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

using namespace std;
using namespace chrono;

void solve()
{
}

int main()
{
    IOS
        ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a, b;
        for (ll i = 0; i < n; i++)
        {
            ll t;
            cin >> t;
            if (a.size() == b.size())
                a.push_back(t);
            else
                b.push_back(t);
        }

        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end());

        ll sum = 0;
        for (ll i = 0; i < b.size(); i++)
            sum = (sum + b[i]);

        ll ans = 0;

        for (ll i = 0; i < b.size(); i++)
        {
            ans = (ans + sum * a[i]);
            sum -= b[i];
        }
        ll i = 0;
        for (i = 0; i < n / 2; i++)
            cout << a[i] << " " << b[i] << " ";

        if (n & 1)
            cout << a[i];

        cout << endl
             << ans << endl;
    }
    return 0;
}