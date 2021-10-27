//author: nobrakebicycle
//created: 27.10.2021 20:02:01
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
    ll int T;
    cin >> T;
    while (T--)
    {
        ll int n, v;
        cin >> n >> v;
        ll int max = ((n - 1) * (n)) / 2;
        ll min;
        if (v >= n - 1)
        {
            min = n - 1;
        }
        else
        {
            min = v + ((n - v) * (n - v + 1)) / 2 - 1;
        }
        cout << max << " " << min << "\n";
    }
    return 0;
}