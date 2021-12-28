//author: nobrakebicycle
//created: 28.12.2021 07:38:01
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
const int N = 1e5 + 5;

int n;
int a[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        int ans = 1e9;
        for (int i = 1; i + 1 <= n; i++)
            ans = min(ans, a[i + 1] - a[i]);
        cout << ans << endl;
    }
    return 0;
}