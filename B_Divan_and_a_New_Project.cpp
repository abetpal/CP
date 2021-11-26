//author: nobrakebicycle
//created: 26.11.2021 17:06:12
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
bool sortcol(const vector<int> &v1,
             const vector<int> &v2)
{
    return v1[0] < v2[0];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli T;
    cin >> T;
    while (T--)
    {
        lli n;
        cin >> n;
        vector<vector<int>> v(n);
        for (lli i = 0; i < n; i++)
        {
            lli a;
            cin >> a;
            v[i].push_back(a);
            v[i].push_back(i);
        }
        //cout << v.size();
        sort(v.rbegin(), v.rend(), sortcol);
        /*for (int i = 0; i < n; i++)
        {
            cout << v[i][0] << "\n";
        }*/
        lli b[n + 1];
        b[0] = 0;
        lli sum = 0;
        lli k = 1;
        for (lli i = 1; i < n + 1; i = i + 2)
        {
            b[v[i - 1][1] + 1] = k;
            sum = sum + abs(k) * 2 * v[i - 1][0];
            //cout << abs(k) * 2 * v[i - 1][0] << "a ";
            k++;
        }
        k = -1;
        for (lli i = 2; i < n + 1; i = i + 2)
        {
            b[v[i - 1][1] + 1] = k;
            sum = sum + abs(k) * 2 * v[i - 1][0];
            //cout << abs(k) * 2 * v[i - 1][0] << "b ";
            k--;
        }
        cout << sum << "\n";
        for (lli i = 0; i < n + 1; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}