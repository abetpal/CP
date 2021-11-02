//author: nobrakebicycle
//created: 02.11.2021 18:25:38
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
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            cout << x / 2 << '\n';
        }
        else
        {
            cout << (x + flag) / 2 << '\n';
            flag *= -1;
        }
    }
    return 0;
}