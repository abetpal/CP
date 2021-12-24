//author: nobrakebicycle
//created: 24.12.2021 17:19:45
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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int last = -1;
        int bad = 0, h = 1;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (last == 0)
                {
                    bad = 1;
                }
            }
            else
            {
                if (last > 0)
                    h += 5;
                else
                    h += 1;
            }
            last = x;
        }
        if (bad)
            cout << -1 << '\n';
        else
            cout << h << '\n';
    }
    return 0;
}