//author: nobrakebicycle
//created: 02.03.2022 20:09:05
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
        ll n;
        cin >> n;
        ll answer = 8 + n;
        for (ll i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c == 6 || c == 7 || c == 13 || c == 14 || c == 20 || c == 21 || c == 27 || c == 28)
                answer--;
        }
        cout << answer << "\n";
    }
    return 0;
}