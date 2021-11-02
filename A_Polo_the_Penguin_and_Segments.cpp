//author: nobrakebicycle
//created: 02.11.2021 11:01:35
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
    int n, k;
    cin >> n >> k;
    int tot = 0;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        tot += r - l + 1;
    }
    cout << (k - tot % k) % k << endl;
}