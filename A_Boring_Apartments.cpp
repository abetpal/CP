//author: nobrakebicycle
//created: 31.12.2021 09:44:36
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
    int T;
    cin >> T;
    while (T--)
    {
        string x;
        cin >> x;
        int dig = x[0] - '0' - 1;
        int len = x.size();
        cout << dig * 10 + len * (len + 1) / 2 << endl;
    }
    return 0;
}