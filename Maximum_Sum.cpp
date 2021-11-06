//author: nobrakebicycle
//created: 05.11.2021 17:07:08
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
    ll int n;
    cin >> n;
    ll int sum = 0;
    ll int count = 0;
    ll int a[n];
    for (ll int i = 0; i < n; i++)
    {

        cin >> a[i];
        if (a[i] >= 0)
        {
            sum += a[i];
            count++;
        }
    }
    if (count == 0)
    {
        count = 1;
        sort(a, a + n);
        sum = a[n - 1];
    }
    cout << sum << " " << count;
    return 0;
}