//author: nobrakebicycle
//created: 02.11.2021 14:39:43
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
    int N, a[1005];
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> a[i];
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        int cur = 1;
        for (int j = i - 1; j >= 0 && a[j] <= a[j + 1]; j--)
            cur++;
        for (int j = i + 1; j < N && a[j] <= a[j - 1]; j++)
            cur++;
        ans = max(ans, cur);
    }
    cout << ans;
    return 0;
}