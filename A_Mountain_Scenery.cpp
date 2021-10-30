//author: nobrakebicycle
//created: 29.10.2021 18:01:45
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
    ll int n, r;
    cin >> n >> r;
    vector<ll int> v;
    for (ll int i = 0; i < 2 * n + 1; i++)
    {
        ll int y;
        cin >> y;
        v.push_back(y);
    }
    for (ll int i = 0; i < 2 * n + 1; i++)
    {
        if (i % 2 != 0 && r && (v[i] - v[i - 1]) > 1 && (v[i] - v[i + 1]) > 1)
        {
            cout << v[i] - 1 << " ";
            r--;
            continue;
        }
        cout << v[i] << " ";
    }

    return 0;
}