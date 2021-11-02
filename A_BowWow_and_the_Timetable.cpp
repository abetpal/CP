//author: nobrakebicycle
//created: 02.11.2021 19:23:54
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            c++;
    }
    if (c > 1)
        cout << ((s.size() - 1) / 2) + 1;
    else
        cout << (s.size()) / 2;

    return 0;
}