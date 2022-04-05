// author: nobrakebicycle
// created: 03.04.2022 06:10:14
// Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
ll sum = 0;
unordered_map<ll, vector<ll>> chainmap;

ll chainsolve(ll contatct, vector<ll> function1)
{
    vector<ll> garbage;
    for (auto i : chainmap[contatct])
    {
        if (chainmap.find(i) != chainmap.end())
        {
            ll telo = chainsolve(i, function1);
            garbage.push_back(telo);
        }
        else
        {
            garbage.push_back(function1[i - 1]);
        }
    }
    ll lelo = garbage.size(), xiomimi = 0;
    sort(garbage.rbegin(), garbage.rend());
    if (contatct == 0)
    {
        for (ll i = 0; i < lelo - 1; i++)
            sum += garbage[i];
        return garbage[lelo - 1];
    }
    if (lelo == 1)
    {
        return max(function1[contatct - 1], garbage[0]);
    }
    else
    {
        for (ll i = 0; i < lelo - 1; i++)
        {
            sum += garbage[i];
        }
        xiomimi = garbage[lelo - 1];
    }
    return max(xiomimi, function1[contatct - 1]);
}

int main()
{
    ll casecomdition = 1;
    ll testcases;
    cin >> testcases;

    while (testcases--)
    {
        sum = 0;
        ll pum = 0;
        ll number;
        chainmap.clear();

        cin >> number;

        vector<ll> abcarr(number, 0);
        vector<ll> bcdarr(number, 0);
        while (pum < number)
        {
            cin >> bcdarr[pum];
            pum++;
        }
        pum = 0;
        while (pum < number)
        {
            cin >> abcarr[pum];
            pum++;
        }
        for (ll i = 0; i < number; i++)
        {
            chainmap[abcarr[i]].push_back(i + 1);
        }
        ll rep = chainsolve(0, bcdarr) + sum;
        cout << "Case #" << casecomdition << ": ";
        casecomdition++;
        cout << rep << "\n";
    }
}