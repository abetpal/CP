//author: nobrakebicycle
//created: 03.11.2021 17:02:21
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
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        cin >> a[i];
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i])
        {
            int distance = i - x;
            int j = x - distance;
            if (j < 1 || j > n || a[i] == a[j])
                ++count;
        }
    }
    cout << count;

    return 0;
}