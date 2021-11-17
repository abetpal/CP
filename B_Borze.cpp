//author: nobrakebicycle
//created: 17.11.2021 15:30:18
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
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.')
        {
            cout << 0;
        }
        else
        {
            if (s[i + 1] == '.')
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
            ++i;
        }
    }
    return 0;
}