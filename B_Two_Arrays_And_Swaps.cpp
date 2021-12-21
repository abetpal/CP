//author: nobrakebicycle
//created: 21.12.2021 10:30:22
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        vector<int> b(n);
        for (auto &it : b)
            cin >> it;
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i < k)
                ans += max(a[i], b[i]);
            else
                ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}