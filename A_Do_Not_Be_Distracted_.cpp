//author: nobrakebicycle
//created: 27.12.2021 09:43:59
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
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        int n;
        cin >> n >> s;
        bool flag = true;
        bool vis[26] = {0};
        for (int i = 0; i < n;)
        {
            if (vis[s[i] - 'A'])
            {
                flag = false;
                break;
            }
            vis[s[i] - 'A'] = 1;
            int j = i + 1;
            for (; j < n; j++)
            {
                if (s[j] != s[i])
                    break;
            }
            i = j;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}