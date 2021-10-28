//author: nobrakebicycle
//created: 28.10.2021 12:59:01
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
    ll int l, r;
    cin >> l >> r;
    if (l % 2 != 0)
        l++;

    if (l + 2 > r)
        cout << "-1";
    else
        cout << l << " " << (l + 1) << " " << (l + 2);
}