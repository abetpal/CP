//author: nobrakebicycle
//created: 18.01.2022 15:28:19
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
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i < n; ++i)
    {
        int k = n - i;
        if (k % i == 0)
        {
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}