//author: nobrakebicycle
//created: 23.01.2022 11:33:09
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
    int T, n, m;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        cout << (n * m + 1) / 2 << '\n';
    }
    return 0;
}