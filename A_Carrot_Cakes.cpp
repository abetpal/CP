//Author-nobrakebicycle
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
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int steps = (n + k - 1) / k;
    int tt = steps * t;
    int cb = (tt - 1) / t * k;
    if (tt - 1 > d)
    {
        cb += (tt - 1 - d) / t * k;
    }
    puts(cb >= n ? "YES" : "NO");
    return 0;
}