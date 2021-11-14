//author: nobrakebicycle
//created: 14.11.2021 12:15:53
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n;
        cin >> n;
        ll int a1[n], a2[n];
        for (ll int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (ll int i = 0; i < n; i++)
        {
            cin >> a2[i];
        }
        sort(a1, a1 + n);
        sort(a2, a2 + n);
        bool flag = true;
        for (ll int i = 0; i < n; i++)
        {
            if (a1[i] + 1 == a2[i] || a1[i] == a2[i])
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}