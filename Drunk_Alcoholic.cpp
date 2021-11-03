//author: nobrakebicycle
//created: 03.11.2021 20:01:24
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
    int T;
    cin >> T;
    while (T--)
    {
        int s;
        cin >> s;
        int sum = 0;
        sum = 3 * (s / 2) - ((s / 2));
        if (s % 2 != 0)
            sum += 3;
        cout << sum << "\n";
    }
    return 0;
}