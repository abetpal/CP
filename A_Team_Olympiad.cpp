//Author-nobrakebicycle
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
    int T;
    cin >> T;
    vector<int> a, b, c;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
            a.push_back(i);
        else if (n == 2)
            b.push_back(i);
        else
            c.push_back(i);
    }
    int m = min(a.size(), min(b.size(), c.size()));
    if (m == 0)
    {
        cout << "0";
    }
    else
    {
        cout << m << "\n";
        for (int i = 0; i < m; i++)
            cout << a[i] + 1 << " " << b[i] + 1 << " " << c[i] + 1 << "\n";
    }
    return 0;
}