//author: nobrakebicycle
//created: 01.11.2021 12:13:02
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
        string N;
        cin >> N;
        int ans = 1e9;
        for (int i = 0; i < N.size(); i++)
            for (int j = i + 1; j < N.size(); j++)
            {
                int now = (N[i] - '0') * 10 + N[j] - '0';
                if (now % 25 == 0)
                {
                    ans = min(ans, (int)N.size() - i - 2);
                }
            }
        cout << ans << "\n";
    }
}