//author: nobrakebicycle
//created: 28.10.2021 08:52:39
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
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if (p % a != 0 || q % b != 0)
            cout << "NO\n";
        else if (p / a == q / b || p / a == q / b - 1 || p / a == q / b + 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}