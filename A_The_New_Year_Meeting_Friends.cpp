//author: nobrakebicycle
//created: 20.12.2021 21:12:29
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
    int ara[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> ara[i];
    }

    sort(ara, ara + 3);

    int pos = ara[1];

    int dis = abs(pos - ara[0]) + abs(pos - ara[2]);

    cout << dis << endl;
    return 0;
}