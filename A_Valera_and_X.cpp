//author: nobrakebicycle
//created: 27.10.2021 17:01:06
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
    int n;
    cin >> n;
    set<char> s1;
    set<char> s2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char p;
            cin >> p;
            if (i == j || i == n - j - 1)
            {
                s1.insert(p);
            }
            else
                s2.insert(p);
        }
    }
    if (s1.size() == 1 && s2.size() == 1 && *s1.begin() != *s2.begin())
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}