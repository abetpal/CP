//author: nobrakebicycle
//created: 19.12.2021 11:13:40
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
    string a = "hello";
    int k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (k < a.size() && s[i] == a[k])
            k++;
    }
    if (k == a.size())
        puts("YES");
    else
        puts("NO");
    return 0;
}