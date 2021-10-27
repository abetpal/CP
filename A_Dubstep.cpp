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
    string s;
    cin >> s;
    ll int i = 0;
    string r;
    int space = 0;
    while (i < s.length())
    {

        if (i + 2 < s.length())
        {
            r = s.substr(i, 3);
            //cout << r << endl;
        }

        if (r == "WUB")
        {
            if (space == 0)
            {
                s = s.replace(i, 3, " ");
                //cout << r << endl;
                space++;
                i += 1;
                r = "";
            }
            else
            {
                s = s.replace(i, 3, "");
                r = "";
            }
        }
        else
        {
            space = 0;
            i++;
        }
    }
    cout << s << "\n";
}