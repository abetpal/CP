// author: nobrakebicycle
// created: 22.05.2022 21:01:35
// Hello Traveller
//  आज रपट जायें तो हमें ना कहियो
//  कल फिसल जायें तो हमें ना उठइयो
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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        bool flag = false;
        for (int i = 0; i <= (n) / 3; i++)
        {
            int x = 3 * i;
            if ((n - x) % 7 == 0)
            {
                flag = true;
            }
        }

        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}