//author: nobrakebicycle
//created: 05.01.2022 18:15:17
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
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c == 1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        if ((cnt1 + 2 * cnt2) % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int sum = (cnt1 + 2 * cnt2) / 2;
            if (sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}