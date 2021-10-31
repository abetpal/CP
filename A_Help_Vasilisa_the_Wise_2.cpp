//author: nobrakebicycle
//created: 31.10.2021 12:19:20
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r1, r2, c1, c2, d1, d2, a = 0, b = 0, c = 0, d = 0;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    bool f = false;
    for (int i = 1; i <= 9; i++)
    {
        f = false;
        a = i, b = r1 - a, c = c1 - a, d = r2 - c;
        if (d == c2 - b && d1 == a + d && d2 == b + c && a != b && a != c && a != d && b != c && b != d && c != d && b < 10 && c < 10 && d < 10 && b > 0 && c > 0 && d > 0)
            f = true;
        if (f)
        {
            cout << a << " " << b << "\n"
                 << c << " " << d;
            return 0;
        }
    }
    cout << -1;
    return 0;
}