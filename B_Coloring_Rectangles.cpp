//author: nobrakebicycle
//created: 14.11.2021 12:02:28
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
        int n, m;
        cin >> n >> m;
        int ans = INT_MAX;
        if ((n % 3) == 0)
        {
            int ans1 = (n / 3) * m;
            ans = min(ans, ans1);
        }
        if ((n % 2) == 0)
        {
            int ans1 = (n / 2) * m;
            ans = min(ans, ans1);
        }
        if ((n % 3) == 1)
        {
            int ans1 = ((n / 3) - 1) * m + 2 * m;
            ans = min(ans, ans1);
        }
        if ((n % 3) == 2)
        {
            int ans1 = (n / 3) * m + m;
            ans = min(ans, ans1);
        }
        if ((n % 3) % 2 == 0)
        {
            int ans1 = (n / 3) * m + m;
            ans = min(ans, ans1);
        }
        if ((m % 3) == 0)
        {
            int ans1 = (m / 3) * n;
            ans = min(ans, ans1);
        }
        if ((m % 2) == 0)
        {
            int ans1 = (m / 2) * n;
            ans = min(ans, ans1);
        }
        if ((m % 3) % 2 == 0)
        {
            int ans1 = (m / 3) * n + n;
            ans = min(ans, ans1);
        }
        if ((m % 3) == 1)
        {
            int ans1 = ((m / 3) - 1) * n + 2 * n;
            ans = min(ans, ans1);
        }
        if ((m % 3) == 2)
        {
            int ans1 = (m / 3) * n + n;
            ans = min(ans, ans1);
        }
        cout << ans << "\n";
    }
    return 0;
}