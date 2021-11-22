//author: nobrakebicycle
//created: 22.11.2021 15:14:21
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
        int a, b;
        cin >> a >> b;
        if ((a + b) % 2 != 0)
        {
            cout << "-1 -1\n";
            continue;
        }
        cout << ceil(a / 2.0) << " " << floor(b / 2.0) << "\n";
    }
    return 0;
}