// author: nobrakebicycle
// created: 13.04.2022 20:04:21
// Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
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
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0 && k == 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << k + i << " ";
            }

            for (int i = 1; i <= n / 2; i++)
            {
                cout << 0 - i << " ";
            }
        }
        else if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << k + i << " ";
            }

            for (int i = 0; i < n / 2; i++)
            {
                cout << 0 - i << " ";
            }
        }
        else
        {
            cout << k << " ";
            for (int i = 1; i <= (n - 1) / 2; i++)
            {
                cout << k + i << " ";
            }

            for (int i = 1; i <= (n - 1) / 2; i++)
            {
                cout << 0 - i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}