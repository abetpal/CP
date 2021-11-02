//author: nobrakebicycle
//created: 02.11.2021 20:08:16
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
        int a[26];
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            a[s[i] - 'a'] = i;
        }
        string s1;
        cin >> s1;
        int sum = 0;
        for (int i = 1; i < s1.length(); i++)
        {
            sum += abs(a[s1[i] - 'a'] - a[s1[i - 1] - 'a']);
        }
        cout << sum << "\n";
    }
    return 0;
}
