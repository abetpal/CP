//author: nobrakebicycle
//created: 18.12.2021 19:37:22
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
    int ans = 0, maxf = -1, minf = 1000000;

    int n;
    cin >> n;
    int x;

    for (int i = 0; i < n; i++)
    {

        cin >> x;
        if (i == 0)
        {
            maxf = x;
            minf = x;
        }
        else
        {
            if (x > maxf)
            {
                ans++;
                maxf = x;
            }
            if (x < minf)
            {
                ans++;
                minf = x;
            }
        }
    }
    cout << ans << endl;
    return 0;
}