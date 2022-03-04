//author: nobrakebicycle
//created: 02.03.2022 20:12:37
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
        if ((n) == 2)
        {
            cout << "-1\n";
            continue;
        }
        else if ((n - 1) % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                /* code */
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }
        else
        {
            cout << "2 3 1 4 ";
            for (int i = 5; i <= n; i++)
            {
                cout << i
                     << " ";
            }
            cout << "\n";
            continue;
        }
    }
    return 0;
}