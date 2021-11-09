//author: nobrakebicycle
//created: 05.11.2021 19:27:48
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
bool sortcol(const vector<ll int> &v1,
             const vector<ll int> &v2)
{
    return v1[1] < v2[1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n, m;
    cin >> n >> m;
    vector<vector<ll int>> v(m, vector<ll int>(2));
    for (ll int i = 0; i < m; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.rbegin(), v.rend(), sortcol);
    ll int sum = v[0][0] * v[0][1];
    ll int s = v[0][0];
    m--;
    ll int i = 1;
    while (s < n && m)
    {
        sum += v[i][0] * v[i][1];
        s += v[i][0];
        i++;
        m--;
    }
    //cout<<sum<<" "<<s<<" "<<i<<" "<<m<<"\n";
    if (s > n)
        sum -= (s - n) * v[i - 1][1];
    cout << sum;
    return 0;
}