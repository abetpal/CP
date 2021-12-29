//author: nobrakebicycle
//created: 29.12.2021 09:56:29
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
        vector<int> v(n);
        for (int &e : v)
        {
            cin >> e;
        }
        vector<int> a = v;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] != a[1])
            {
                cout << i + 1 << "\n";
            }
        }
    }
    return 0;
}