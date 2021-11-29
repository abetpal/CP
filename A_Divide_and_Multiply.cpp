//author: nobrakebicycle
//created: 29.11.2021 19:26:59
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
        vector<long long> a(n);
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            while (a[i] % 2 == 0)
            {
                a[i] /= 2;
                k += 1;
            }
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < k; i++)
        {
            a.back() *= 2;
        }
        cout << accumulate(a.begin(), a.end(), 0LL) << '\n';
    }

    return 0;
}