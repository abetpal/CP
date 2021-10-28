//author: nobrakebicycle
//created: 28.10.2021 08:48:00
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
        int n;
        cin >> n;
        if (n >= 200 && n <= 300)
            cout << "Hard\n";
        else if (n >= 100 && n < 200)
            cout << "Medium\n";
        else
            cout << "Easy\n";
    }
    return 0;
}