//author: nobrakebicycle
//created: 10.01.2022 13:51:49
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
        vector<int> a(2 * n);
        for (auto &it : a)
            cin >> it;
        vector<int> used(n);
        vector<int> p;
        for (int i = 0; i < 2 * n; ++i)
        {
            if (!used[a[i] - 1])
            {
                used[a[i] - 1] = true;
                p.push_back(a[i]);
            }
        }
        for (auto it : p)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}