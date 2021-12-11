//author: nobrakebicycle
//created: 11.12.2021 15:48:37
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
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; ++i)
    {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n << endl;

    return 0;
}