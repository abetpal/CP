//author: nobrakebicycle
//created: 20.12.2021 21:06:34
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
        string b;
        cin >> b;

        string a = b.substr(0, 2);

        for (int i = 3; i < b.size(); i += 2)
        {
            a += b[i];
        }

        cout << a << endl;
    }
    return 0;
}