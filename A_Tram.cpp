//author: nobrakebicycle
//created: 13.12.2021 21:40:03
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
    int n;
    cin >> n;
    int ans = 0, now = 0;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        now -= x;
        now += y;
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}