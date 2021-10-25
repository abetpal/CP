//author: nobrakebicycle
//created: 25.10.2021 07:42:38
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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tq;
    cin >> tq;
    while (tq--)
    {
        long long u = (long long)2e18;
        cout << "? " << u << endl;
        long long x;
        cin >> x;
        u = u - x - 1;
        cout << "? " << u << endl;
        cin >> x;
        cout << "! " << x + 1 << endl;
    }
    return 0;
}