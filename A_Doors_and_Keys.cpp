//author: nobrakebicycle
//created: 22.02.2022 20:13:08
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
void solve()
{
    string s;
    cin >> s;
    set<int> have;
    for (auto c : s)
    {
        if ('a' <= c && c <= 'z')
            have.insert(c - 'a');
        else
        {
            if (!have.count(c - 'A'))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}