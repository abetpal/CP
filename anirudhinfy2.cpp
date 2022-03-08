//author: nobrakebicycle
//created: 08.03.2022 11:09:08
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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }

    int q;
    cin >> q;
    vector<int> query;

    for (int i = 0; i < q; i++)
    {
        int d;
        cin >> d;
        query.push_back(d);
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int ii = (i + 1) % n;
        int ans = __gcd(v[i], v[ii]);
        mp[i] = ans;
    }

    vector<int> result;

    for (int i = 0; i < q; i++)
    {
        int ii = (query[i] + 1) % n;
        int temp = v[query[i]];
        v[query[i]] = v[ii];
        v[ii] = temp;
        int index1;
        if (query[i] == 0)
        {
            index1 = n - 1;
        }
        else
            index1 = query[i] - 1;

        int index2;
        index2 = (ii + 1) % n;

        int gcd1 = __gcd(v[query[i]], v[index1]);
        int gcd2 = __gcd(v[ii], v[index2]);

        mp[index1] = gcd1;
        mp[ii] = gcd2;
        int maxx = INT_MIN;

        for (auto j : mp)
        {
            if ((j.second) > maxx)
            {
                maxx = j.second;
            }
        }

        result.push_back(maxx);
    }
    int ans = result[0];
    for (int i = 1; i < result.size(); i++)
    {
        ans ^= result[i];
    }
    cout << ans;

    return 0;
}