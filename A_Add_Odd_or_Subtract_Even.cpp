//author: nobrakebicycle
//created: 12.01.2022 20:26:25
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
        if (a == b)
            cout << 0 << endl;
        else
            cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
    }
    return 0;
}