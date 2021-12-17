//author: nobrakebicycle
//created: 17.12.2021 17:41:46
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
    string s, s2, sfinal;
    cin >> s >> s2 >> sfinal;
    s += s2;
    sort(s.begin(), s.end());
    sort(sfinal.begin(), sfinal.end());
    if (s == sfinal)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}