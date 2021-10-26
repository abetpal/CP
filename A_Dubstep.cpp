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
            cout << r << endl;
        }

        if (r == "WUB")
        {
            if (space == 0)
            {
                cout << " ";
                space++;
            }
            i += 3;
        }
        else
        {
            space = 0;
            cout << s[i];
            i++;
        }
    }
    cout << "\n";
}