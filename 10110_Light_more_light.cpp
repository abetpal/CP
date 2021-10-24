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
    int n;
    cin >> n;

    while (n)
    {
        int x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (x == 0)
                    x = 1;
                else
                    x = 0;
            }
        }
        if (x == 0)
        {
            cout << "no"
                 << "\n";
        }
        else
            cout << "yes"
                 << "\n";
        cin >> n;
    }
    return 0;
}