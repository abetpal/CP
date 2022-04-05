// author: nobrakebicycle
// created: 05.04.2022 21:39:08
// Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli instructioncount, validityperiod;
    cin >> instructioncount >> validityperiod;
    lli x;
    cin >> x;
    unordered_map<lli, lli> keys;
    int c = 0;
    for (lli i = 0; i < x; i++)
    {
        c++;
        lli b;
        cin >> b;
        keys[b]++;
    }

    cout << c;
    lli maxi = 0;
    for (auto j : keys)
    {
        lli count = 0;
        lli n = j.first;
        set<int> v;
        for (int i = 1; i <= sqrt(n); i++)
        {

            if (n % i == 0)
            {

                // check if divisors are equal
                if (n / i == i)
                    v.insert(i);
                else
                {
                    v.insert(i);

                    // push the second divisor in the vector
                    v.insert(n / i);
                }
            }
        }

        for (auto k : v)
        {
            if (k == 1)
                continue;
            count += keys[k];
        }

        maxi = max(maxi, count);
    }

    lli prod = instructioncount * validityperiod;

    vector<lli> ans;
    lli strength = maxi * 100000;
    if (prod < strength)
        ans.push_back(0);
    else
        ans.push_back(1);

    ans.push_back(strength);

    cout << ans[0] << " " << ans[1];

    return 0;
}