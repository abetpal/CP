//author: nobrakebicycle
//created: 29.10.2021 09:37:58
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
    long long int n, m, i, sum = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        sum += (m + (i % 5)) / 5;
    cout << sum;

    return 0;
}