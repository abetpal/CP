//author: nobrakebicycle
//created: 12.03.2022 12:09:32
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
    ll minii, minii2, nnn;
    cin >> minii >> minii2 >> nnn;
    vector<ll> v(nnn);
    for (ll i = 0; i < nnn; i++)
    {
        ll c2;
        cin >> c2;
        v[i] = c2;
    }
    sort(v.begin(), v.end());
    ll count1 = 1, count2 = 1;
    ll dd1 = v.back();
    v.pop_back();
    vector<ll> vv1, vvv2;
    if (minii < minii2)
    {
        count1 = dd1 * minii + 1;
        vv1.push_back(dd1);
    }
    else
    {
        count2 = dd1 * minii2 + 1;
        vvv2.push_back(dd1);
    }
    while (v.size() > 0)
    {
        dd1 = v.back();
        v.pop_back();
        if (count1 > count2)
        {
            count2 += dd1 * minii2;
            vvv2.push_back(dd1);
        }
        else
        {
            count1 += dd1 * minii;
            vv1.push_back(dd1);
        }
    }
    ll s11 = vv1.size();
    for (ll i = 0; i < s11; i++)
    {
        cout << vv1[i] << " ";
    }
    cout << "\n";
    s11 = vvv2.size();
    for (ll i = 0; i < s11; i++)
    {
        cout << vvv2[i] << " ";
    }
    cout << "\n";
}