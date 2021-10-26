//author: nobrakebicycle
//created: 26.10.2021 18:37:05
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
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] != a[i][1])
        {
            cout << "rated";
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (a[i][0] > a[j][0])
            {
                cout << "unrated";
                return 0;
            }
        }
    }
    cout << "maybe";
    return 0;
}