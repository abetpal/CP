//author: nobrakebicycle
//created: 02.11.2021 15:10:05
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
    string s;
    cin >> n >> s;
    int total = 0, lcount = 0, rcount = 0;
    int start = -1;
    int last = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
            continue;
        if (s[i] == 'L')
        {
            if (start == -1)
                start = i;
            total++;
            lcount++;
        }
        if (s[i] == 'R')
        {
            if (start == -1)
                start = i;
            total++;
            rcount++;
        }
    }
    last = start + total - 1;
    /*cout << total << "\n"
         << rcount << "\n"
         << lcount << "\n"
         << start << "\n"
         << last << "\n";*/
    if (lcount == total)
        cout << last + 1 << " " << start;
    else if (rcount == total)
        cout << start + 1 << " " << last + 2;
    else
    {
        cout << start + 1 << " " << start + rcount;
    }
    return 0;
}