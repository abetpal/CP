//author: nobrakebicycle
//created: 25.10.2021 19:20:53
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
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        puts("-1");
    }
    else
    {
        int max1 = s1.length();
        int max2 = s2.length();
        if (max1 >= max2)
            cout << max1;
        else
            cout << max2;
    }
    return 0;
}