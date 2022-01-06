//author: nobrakebicycle
//created: 06.01.2022 16:28:19
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
        int N;
        cin >> N;
        int sum1 = (1 << N), sum2 = 0;
        for (int i = 1; i < N / 2; i++)
            sum1 += (1 << i);
        for (int i = N / 2; i < N; i++)
            sum2 += (1 << i);
        cout << sum1 - sum2 << endl;
    }
    return 0;
}