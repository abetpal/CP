//author: nobrakebicycle
//created: 02.11.2021 11:41:44
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
    int n, x, a[111111], m = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
        if (a[x] > m)
            m = a[x];
    }
    if (m > (n + 1) / 2)
        puts("NO");
    else
        puts("YES");
    return 0;
}