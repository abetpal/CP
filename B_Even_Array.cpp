//author: nobrakebicycle
//created: 21.12.2021 10:33:35
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
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 != i % 2)
            {
                if (i % 2 == 0)
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }
        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}