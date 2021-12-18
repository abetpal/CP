//author: nobrakebicycle
//created: 18.12.2021 19:40:07
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
    int a, b;
    while (cin >> a >> b)
    {
        int x = min(a, b);
        int y = (a - x) / 2 + (b - x) / 2;
        cout << x << " " << y << endl;
    }
    return 0;
}