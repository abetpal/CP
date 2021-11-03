//author: nobrakebicycle
//created: 03.11.2021 20:23:41
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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                continue;
            }
            else
                count++;
        }
        /* if (count == 1)
            cout << "SAHID\n";
        else if (count == 2)
        {
            cout << "RAMADHIR\n";
        }
        else if (count == 3)
            cout << "SAHID\n";*/
        if (count % 3 == 0 || count % 3 == 1)
        {
            cout << "SAHID\n";
        }
        else if (count % 3 == 2)
        {
            cout << "RAMADHIR\n";
        }
    }
    return 0;
}