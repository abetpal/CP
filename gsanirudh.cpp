// author: nobrakebicycle
// created: 02.04.2022 13:35:31
// Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a;

    for (ll i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        a.push_back(b);
    }

    ll even = a[0];
    bool flag = true;
    // cout << "a\n";
    for (int i = 2; i < n; i = i + 2)
    {
        // cout << even << a[i];
        if (flag == true)
        {

            even = ((even % 2) * (a[i] % 2)) % 2;
            flag = false;
            continue;
        }
        else
        {
            even = ((even % 2) + (a[i] % 2)) % 2;
            flag = true;
            continue;
        }
    }
    // cout << "\n";
    ll odd = a[1];
    flag = true;
    for (int i = 3; i < n; i = i + 2)
    {
        if (flag == true)
        {
            odd = ((odd % 2) * (a[i] % 2)) % 2;
            flag = false;
            continue;
        }
        else
        {
            odd = ((odd % 2) + (a[i] % 2)) % 2;
            flag = true;
            continue;
        }
    }
    // cout << even << " " << odd;
    if (even > odd)
    {
        cout << "EVEN";
    }
    if (odd > even)
    {
        cout << "ODD";
    }

    if (odd == even)
    {
        cout << "NEUTRAL";
    }

    return 0;
}