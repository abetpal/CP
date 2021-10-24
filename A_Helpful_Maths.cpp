//Author-nobrakebicycle
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
    string s, sn;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
        sn += s[i];
    sort(sn.begin(), sn.end());
    for (int i = 0; i < sn.length(); i++)
    {
        cout << sn[i];
        if (i != sn.length() - 1)
            cout << '+';
    }
}