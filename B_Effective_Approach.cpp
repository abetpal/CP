//author: nobrakebicycle
//created: 11.11.2021 18:33:52
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
    int n, m, s1, s2, i, a[100021], b[100021], pos[100021];
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    cin >> m;

    for (i = 0; i < m; i++)
        cin >> b[i];
    s1 = 0;
    s2 = 0;

    for (i = 0; i < m; i++)
    {
        s1 += pos[b[i]] + 1;
        s2 += n - pos[b[i]];
    }
    cout << s1 << " " << s2 << endl;
    return 0;
}