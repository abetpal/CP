// author: nobrakebicycle
// created: 03.04.2022 06:51:02
// Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
    srand(time(NULL));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    while (T--)
    {

        ll n, k;
        cin >> n >> k;
        unordered_map<int, int> mp;
        ll a, c, count = 0;
        int z = 1;
        for (int i = 0; i < k; i++)
        {

            cin >> a >> c;

            count += c;
            // cout << a << " " << c << " " << count << "\n";
            mp[a] = 1;

            while (true)
            {

                z = 1 + rand() % n;
                if (mp[z] != 1)
                {
                    break;
                }
            }

            cout << "T " << z << "\n";
        }
        cin >> a >> c;
        count += c;

        ll maxi = (n * (n - 1)) / 2;

        if (count < maxi)
        {
            cout << "E " << count << "\n";
        }
        else
            cout << "E " << maxi << "\n";
    }
    return 0;
}