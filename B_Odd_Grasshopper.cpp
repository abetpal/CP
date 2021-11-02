//author: nobrakebicycle
//created: 02.11.2021 20:14:54
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
    ll int T;
    cin >> T;
    while (T--)
    {
        ll int x, n;
        cin >> x >> n;
        ll int q = n / 2;
        ll int rem = n % 2;
        ll int sum = 0;
        if (x % 2 == 0)
        {

            if (q % 2 != 0)
            {
                sum += 1;
            }
            if (rem == 1 && q % 2 == 0)
            {
                sum = sum - n;
            }
            if (rem == 1 && q % 2 != 0)
            {
                sum = sum + n;
            }
        }
        else
        {

            if (q % 2 != 0)
            {
                sum -= 1;
            }
            if (rem == 1 && q % 2 == 0)
            {
                sum = sum + n;
            }
            if (rem == 1 && q % 2 != 0)
            {
                sum = sum - n;
            }
        }
        cout << (x + sum) << "\n";
    }
    return 0;
}