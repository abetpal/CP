//author: nobrakebicycle
//created: 28.10.2021 16:00:12
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    FAST
        ll int n,
        k, c = 0;
    cin >> n >> k;
    for (ll int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<int> v(k + 1, 0);
        for (ll int j = 0; j < s.length(); j++)
        {
            if ((ll int)s[j] - 48 > k || v[(ll int)s[j] - 48] == 1)
                continue;
            v[(ll int)s[j] - 48] = 1;
        }
        if (accumulate(v.begin(), v.end(), 0) == k + 1)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}