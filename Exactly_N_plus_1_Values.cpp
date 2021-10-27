//author: nobrakebicycle
//created: 27.10.2021 19:42:16
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
    ll int T;
    cin >> T;
    while (T--)
    {
        ll int n;
        cin >> n;
        if (n == 1)
        {
            cout << "1 1"
                 << "\n";
        }
        else
        {
            ll int i = 1;
            cout << "1"
                 << " ";
            n--;
            for (; n > -1; n--)
            {
                cout << (i) << " ";
                i = i * 2;
            }
            cout << "\n";
        }
    }
    return 0;
}