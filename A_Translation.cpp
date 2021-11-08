//author: nobrakebicycle
//created: 08.11.2021 19:43:17
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
    string S, T;
    cin >> S;
    cin >> T;
    reverse(T.begin(), T.end());
    if (S == T)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}