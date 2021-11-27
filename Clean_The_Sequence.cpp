//author: nobrakebicycle
//created: 26.11.2021 23:56:52
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    FAST
        ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        vector<int> ugly(k + 1, 0);
        vector<int> num(k + 1, 0);
        int n_consec_diff = 0;
        int st = 0;
        while (st < n)
        {
            int cur_end = st;
            while (cur_end < n - 1 && a[st] == a[cur_end + 1])
            {
                cur_end++;
            }
            if (st > 0 && cur_end < n - 1 && a[st - 1] != a[cur_end + 1])
            {
                ugly[a[st]]++;
            }
            st = cur_end + 1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                n_consec_diff++;
                num[a[i]]++;
                num[a[i + 1]]++;
            }
        }
        for (int i = 1; i <= k; i++)
        {
            ugly[i] += n_consec_diff - num[i];
            cout << ugly[i] << " ";
        }
        cout << "\n";
    }
}