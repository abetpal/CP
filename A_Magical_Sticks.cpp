//author: nobrakebicycle
//created: 04.01.2022 10:49:37
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
    long long n, t;
    scanf("%lld", &t);
    while (t > 0)
    {
        t--;
        scanf("%lld", &n);
        if (n % 2)
        {
            printf("%lld\n", (n / 2) + 1);
        }
        else
        {
            printf("%lld\n", n / 2);
        }
    }
    return 0;
}