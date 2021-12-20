//author: nobrakebicycle
//created: 20.12.2021 21:03:09
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
        vector<int> ans;
        int power = 1;
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                ans.push_back((n % 10) * power);
            }
            n = n / 10;
            power = power * 10;
        }
        cout << ans.size() << '\n';
        for (auto number : ans)
            cout << number << " ";
        cout << '\n';
    }
    return 0;
}