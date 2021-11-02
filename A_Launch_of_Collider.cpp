//author: nobrakebicycle
//created: 02.11.2021 09:30:46
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int ans = 1000000000000000;
    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == 'R' && s[i + 1] == 'L') && (a[i] < a[i + 1]))
        {
            ans = min(ans, (a[i + 1] - a[i]) / 2);
        }
        if ((s[i] == 'L' && s[i + 1] == 'R') && (a[i + 1] < a[i]))
        {
            ans = min(ans, abs((a[i + 1] - a[i]) / 2));
        }
    }
    if (ans < 1000000000000000)
    {
        cout << ans;
    }
    else
        cout << "-1";

    return 0;
}