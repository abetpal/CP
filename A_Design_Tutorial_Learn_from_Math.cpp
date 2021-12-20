//author: nobrakebicycle
//created: 20.12.2021 21:05:21
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
    int n;
    cin >> n;
    for (int x = 4; true; x += 2)
    {
        if ((n - x) % 3 == 0)
        {
            cout << x << " " << n - x << endl;
            return 0;
        }
    }
    return 0;
}