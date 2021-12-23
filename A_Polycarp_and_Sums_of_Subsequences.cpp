//author: nobrakebicycle
//created: 23.12.2021 10:43:44
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
        vector<int> b(7);

        for (int i = 0; i < 7; i++)
            cin >> b[i];

        cout << b[0] << ' ' << b[1] << ' ' << b[6] - b[0] - b[1] << endl;
    }
    return 0;
}