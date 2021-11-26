//author: nobrakebicycle
//created: 26.11.2021 17:05:29
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
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int num, left, right, maxx;
        cin >> num >> left >> right >> maxx;
        ll int a1[num];
        for (ll int i = 0; i < num; i++)
        {
            cin >> a1[i];
        }
        sort(a1, a1 + num);
        ll int c = 0;

        for (ll int i = 0; i < num; i++)
        {
            if (a1[i] >= left && a1[i] <= right)
            {
                if (maxx >= a1[i])
                {
                    maxx = maxx - a1[i];
                    c++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << c << "\n";
    }
}