//author: nobrakebicycle
//created: 28.10.2021 12:47:17
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
    ll int a, b, c;
    cin >> a >> b >> c;
    ll int ans = ((a + c - 1) / c) * ((b + c - 1) / c);
    cout << ans;
    return 0;
}