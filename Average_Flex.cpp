//Author-nobrakebicycle
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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int d = 0, e = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (a[j] <= a[i])
                    d++;
                else
                    e++;
            }
            if (d >= e)
                c++;
        }
        cout << c << "\n";
    }
    return 0;
}