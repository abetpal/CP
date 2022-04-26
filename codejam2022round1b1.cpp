// author: nobrakebicycle
// created: 24.04.2022 21:33:51
// Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
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
    for (int k = 1; k <= T; k++)
    {
        int n;
        cin >> n;
        deque<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int c = 0;
        int ans = 0;
        while (v.size() != 0)
        {
            if (min(v.front(), v.back()) >= c)
            {
                ans++;
                c = max(c, min(v.front(), v.back()));
                // cout << "min" << ans << " " << c << " " << min(v.front(), v.back()) << "\n";
                if (min(v.front(), v.back()) == v.front())
                {
                    v.pop_front();
                }
                else
                {
                    v.pop_back();
                }
            }
            else if (max(v.front(), v.back()) >= c)
            {
                ans++;
                c = max(c, max(v.front(), v.back()));
                // cout << "max" << ans << " " << c << " " << max(v.front(), v.back()) << "\n";
                if (max(v.front(), v.back()) == v.front())
                {
                    v.pop_front();
                }
                else
                {
                    v.pop_back();
                }
            }
            else
            {
                c = max(c, min(v.front(), v.back()));
                if (min(v.front(), v.back()) == v.front())
                {
                    v.pop_front();
                }
                else
                {
                    v.pop_back();
                }
            }
        }
        cout << "Case #" << k << ": " << ans << "\n";
    }
    return 0;
}