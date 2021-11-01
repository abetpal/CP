//author: nobrakebicycle
//created: 01.11.2021 12:33:25
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> x(k);
        for (int i = 0; i < k; i++)
            cin >> x[i];
        sort(x.rbegin(), x.rend());

        int cnt = 0;
        long long sum = 0;

        while (cnt < x.size() && sum + n - x[cnt] < n)
        {
            sum += n - x[cnt++];
        }

        cout << cnt << '\n';
    }

    return 0;
}