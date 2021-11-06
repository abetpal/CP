//author: nobrakebicycle
//created: 05.11.2021 09:09:29
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
    int x[n], y[n], z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    if (accumulate(x, x + n, 0) == 0 && accumulate(y, y + n, 0) == 0 && accumulate(z, z + n, 0) == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}