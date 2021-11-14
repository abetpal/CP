//author: nobrakebicycle
//created: 14.11.2021 11:48:55
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
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int a1, a2;
        cin >> a1 >> a2;
        ll int answer1, answer2;
        answer1 = 0 - (a1 * a1);
        answer2 = a2 * a2;
        cout << answer1 << " " << answer2 << "\n";
    }
    return 0;
}
