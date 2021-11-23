//author: nobrakebicycle
//created: 23.11.2021 20:11:46
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
        if (a == 1 && b == 1)
        {
            cout << "0\n";
        }
        else if (a == 1 || b == 1)
        {
            cout << "1\n";
        }
        else
            cout << "2\n";
    }
    return 0;
}