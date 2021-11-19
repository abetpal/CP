//author: nobrakebicycle
//created: 19.11.2021 18:17:54
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
    string s;
    int i, w;
    w = 0;
    cin >> s;
    for (i = 0; i < s.size(); i++)
        if (s[i] == '4' || s[i] == '7')
            w++;
    if (w == 4 || w == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}