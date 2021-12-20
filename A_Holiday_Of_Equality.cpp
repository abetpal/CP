//author: nobrakebicycle
//created: 20.12.2021 21:15:46
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
ll n, mx, x, sum;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> x, mx = max(mx, x), sum += x;
    cout << mx * n - sum;
    return 0;
}