//author: nobrakebicycle
//created: 18.12.2021 19:38:31
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
    scanf("%d %d", &n, &k);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (k + 5 * i <= 240)
        {
            ans++;
            k += 5 * i;
        }
    }
    printf("%d\n", ans);
    return 0;
}