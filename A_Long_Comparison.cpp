//author: nobrakebicycle
//created: 04.12.2021 09:19:41
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
        long double x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        for (int x = (int)x1; x; x /= 10, x1 /= 10)
            p1++;
        for (int x = (int)x2; x; x /= 10, x2 /= 10)
            p2++;
        if (p1 > p2)
            cout << '>';
        else if (p1 < p2)
            cout << '<';
        else
        {
            if (x1 > x2)
                cout << '>';
            else if (x1 < x2)
                cout << '<';
            else
                cout << '=';
        }
        cout << '\n';
    }
    return 0;
}