//author: nobrakebicycle
//created: 20.12.2021 21:08:28
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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        n /= 2;
        if (n & 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 1; i <= n; ++i)
        {
            cout << i * 2 << " ";
        }
        for (int i = 1; i < n; ++i)
        {
            cout << i * 2 - 1 << " ";
        }
        cout << 3 * n - 1 << endl;
    }
    return 0;
}