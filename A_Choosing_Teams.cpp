//author: nobrakebicycle
//created: 20.12.2021 21:14:18
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
    int n, k;
    cin >> n >> k;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a + k <= 5)
            res++;
    }
    cout << res / 3 << endl;
    return 0;
}