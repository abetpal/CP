// author: nobrakebicycle
// created: 14.05.2022 00:37:02
// Hello Traveller
//  आज रपट जायें तो हमें ना कहियो
//  कल फिसल जायें तो हमें ना उठइयो
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
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    vector<int> ps;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        ps.push_back(sum);
    }

    unordered_map<int, int> mp;
    int z = k, initial = 0;
    for (int i = 0; i < initial + z && i < n; i++)
    {

        if (mp[a[i]] == 1)
        {
            // cout << 2 << " " << a[i] << endl;
            initial = i;
            mp.clear();
            i--;
            if (initial + z > n)
            {
                cout << -1;
                break;
            }
            continue;
        }
        if (mp[a[i]] == 0)
        {
            // cout << 1 << " " << a[i] << endl;
            mp[a[i]]++;
        }
        if (i == initial + z - 1)
        {
            cout << i << endl;
                }
    }
    return 0;
}