//author: nobrakebicycle
//created: 21.11.2021 21:05:12
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
        int n;
        cin >> n;
        int j = 1;
        for (int i = 0; i < n; i++)
        {
            cout << j << " ";
            j = j + 2;
        }
        cout << "\n";
    }
    return 0;
}