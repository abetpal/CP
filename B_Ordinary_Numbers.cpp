//author: nobrakebicycle
//created: 17.01.2022 09:40:46
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
        int res = 0;
        for (ll pw = 1; pw <= n; pw = pw * 10 + 1)
        {
            for (int d = 1; d <= 9; d++)
            {
                if (pw * d <= n)
                {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}