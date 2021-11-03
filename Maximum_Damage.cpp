//author: nobrakebicycle
//created: 03.11.2021 21:20:25
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
                cout << (a[i] & a[i + 1]) << " ";
            else if (i == n - 1)
                cout << (a[i] & a[i - 1]) << " ";
            else
            {
                cout << max(a[i] & a[i - 1], a[i] & a[i + 1]) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}