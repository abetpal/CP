//author: nobrakebicycle
//created: 27.10.2021 12:37:18
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
    int n, l;
    cin >> n >> l;
    int c = 0, m = 0, y = 0, w = 0, g = 0, b = 0;
    for (int i = 0; i < n * l; i++)
    {
        char d;
        cin >> d;
        if (d == 'C')
        {
            c++;
        }
        if (d == 'M')
        {
            m++;
        }
        if (d == 'Y')
        {
            y++;
        }
        if (d == 'W')
        {
            w++;
        }
        if (d == 'G')
        {
            g++;
        }
        if (d == 'B')
        {
            b++;
        }
    }
    if (b + w + g == n * l)
        cout << "#Black&White";
    else
        cout << "#Color";
    return 0;
}