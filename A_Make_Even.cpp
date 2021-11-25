//author: nobrakebicycle
//created: 25.11.2021 20:44:00
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
    ll T;
    cin >> T;
    while (T--)
    {
        string s1;
        cin >> s1;
        ll count = 0;
        if ((s1[s1.length() - 1] - '0') % 2 == 0)
            cout << 0 << "\n";
        else if ((s1[0] - '0') % 2 == 0)
            cout << 1 << "\n";
        else
        {
            bool flag = false;
            for (ll k = 1; k <= s1.length() / 2; k++)
            {
                if (((s1[k] - '0') % 2 == 0) || ((s1[s1.length() - k] - '0') % 2 == 0))
                {
                    flag = true;
                    cout << 2 << "\n";
                    break;
                }
            }
            if (!flag)
                cout << -1 << "\n";
        }
    }
}