//author: nobrakebicycle
//created: 17.12.2021 17:17:29
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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int cnt = 0;
    for (int i = 1; i <= d; ++i)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            ++cnt;
        }
    }
    cout << cnt << "\n";
    return 0;
}