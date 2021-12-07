//author: nobrakebicycle
//created: 07.12.2021 17:04:56
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
    ll n, k, w;
    cin >> k >> n >> w;
    ll res = max(0ll, (w) * (w + 1) / 2 * k - n);

    cout << res << endl;

    return 0;
}