//author: nobrakebicycle
//created: 20.03.2022 10:57:29
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
    lli testc;
    cin >> testc;
    lli iterarte = 1;
    while (testc--)
    {
        string I, P;
        cin >> I >> P;
        vector<lli> arrra(256, 0);
        vector<lli> arrrb(256, 0);
        for (lli i = 0; i < I.length(); i++)
        {
            arrra[(lli)I[i]]++;
        }
        for (lli i = 0; i < P.length(); i++)
        {
            arrrb[(lli)P[i]]++;
        }
        bool jhanda = true;
        lli num = 0;
        for (lli i = 0; i < 256; i++)
        {
            if (arrrb[i] > arrra[i])
            {
                num += arrrb[i] - arrra[i];
            }
            if (arrra[i] > arrrb[i])
            {
                jhanda = false;
            }
        }
        if (jhanda == false)
        {
            cout << "Case #" << iterarte << ": "
                 << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "Case #" << iterarte << ": " << num << endl;
        }
        iterarte++;
    }

    return 0;
}