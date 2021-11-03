//author: nobrakebicycle
//created: 03.11.2021 20:10:19
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
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += (i + 1) * ((int)s[i] - 'a' + 1);
        }
        cout << sum << "\n";
    }
    return 0;
}