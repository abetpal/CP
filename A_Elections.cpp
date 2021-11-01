//author: nobrakebicycle
//created: 01.11.2021 12:04:31
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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a <= max(b, c))
            cout << max(b, c) - a + 1 << " ";
        else
            cout << "0 ";
        if (b <= max(a, c))
            cout << max(a, c) - b + 1 << " ";
        else
            cout << "0 ";
        if (c <= max(b, a))
            cout << max(b, a) - c + 1 << "\n";
        else
            cout << "0\n";
    }
    return 0;
}