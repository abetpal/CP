//author: nobrakebicycle
//created: 25.10.2021 09:13:39
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n][2];
    b[0][0] = abs(a[0] - a[1]);
    b[0][1] = abs(a[0] - a[n - 1]);
    b[n - 1][0] = abs(a[n - 1] - a[n - 2]);
    b[n - 1][1] = abs(a[n - 1] - a[0]);

    for (int i = 1; i < n - 1; i++)
    {
        int min1 = abs(a[i] - a[i + 1]);
        int min2 = abs(a[i - 1] - a[i]);
        int max1 = abs(a[i] - a[n - 1]);
        int max2 = abs(a[0] - a[i]);
        if (min1 <= min2)
        {
            b[i][0] = min1;
        }
        else
        {
            b[i][0] = min2;
        }
        if (max1 >= max2)
        {
            b[i][1] = max1;
        }
        else
        {
            b[i][1] = max2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i][0] << " " << b[i][1] << "\n";
    }
    return 0;
}