//author: nobrakebicycle
//created: 08.01.2022 12:27:14
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
        int w, h, n;
        cin >> w >> h >> n;
        int res = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            res *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            res *= 2;
        }
        cout << (res >= n ? "YES\n" : "NO\n");
    }
    return 0;
}