//author: nobrakebicycle
//created: 26.10.2021 16:59:01
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        k -= ((n + 1) / 2);
        cout << 2 * k << endl;
    }
}