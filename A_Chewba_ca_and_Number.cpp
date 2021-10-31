//author: nobrakebicycle
//created: 31.10.2021 11:55:29
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
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        if (!(i == 0 && x[i] == '9') && x[i] - '0' > 9 - (x[i] - '0'))
            x[i] = 9 - (x[i] - '0') + '0';
    }
    cout << x << endl;
    return 0;
    return 0;
}