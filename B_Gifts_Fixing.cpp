//author: nobrakebicycle
//created: 26.12.2021 10:24:02
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
        vector<int> a(n), b(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        int mna = *min_element(a.begin(), a.end());
        int mnb = *min_element(b.begin(), b.end());
        long long ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans += max(a[i] - mna, b[i] - mnb);
        }
        cout << ans << endl;
    }
    return 0;
}