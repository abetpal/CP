//author: nobrakebicycle
//created: 21.12.2021 10:25:59
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int count(int N)
{
    int res = (int)sqrt(N) + (int)cbrt(N) - (int)(sqrt(cbrt(N)));
    return res;
}
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
        cout << count(n) << endl;
    }
    return 0;
}