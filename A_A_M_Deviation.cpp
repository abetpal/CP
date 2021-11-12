//author: nobrakebicycle
//created: 12.11.2021 20:54:53
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
        ll int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        ll int a4 = a1 + a3 - (2 * a2);
        if (a4 == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            if (a4 % 3 == 0)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
    }
    return 0;
}
