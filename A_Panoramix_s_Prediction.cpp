//author: nobrakebicycle
//created: 28.10.2021 13:32:30
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
    int n, m;
    cin >> n >> m;
    int flag = 0;
    for (int i = n + 1; i <= m; i++)
    {
        int c = 2;
        for (int j = 2; j < n; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            //cout << i;
            if (i == m && flag == 0)
            {
                cout << "YES";
                return 0;
            }
            else
            {
                flag++;
            }
        }
    }
    cout << "NO";
    return 0;
}