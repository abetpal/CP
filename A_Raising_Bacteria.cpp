//author: nobrakebicycle
//created: 02.11.2021 15:54:15
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
    int x, ans = 0;
    cin >> x;

    while (x > 1)
    {
        if (x % 2 == 0)
        {
            x /= 2;
        }
        else
        {
            x--;
            ans++;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}