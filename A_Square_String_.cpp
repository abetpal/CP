//author: nobrakebicycle
//created: 21.12.2021 10:24:49
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
        string s;
        cin >> s;
        int n = s.length();

        if (n % 2 == 0 and s.substr(0, n / 2) == s.substr(n / 2, n / 2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}