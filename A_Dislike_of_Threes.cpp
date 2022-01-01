//author: nobrakebicycle
//created: 01.01.2022 19:40:40
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
        int k;
        cin >> k;

        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
                continue;
            if (--k == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}