//author: nobrakebicycle
//created: 26.10.2021 20:36:36
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
    const int N = 100020;
    int a[N] = {0};
    cin >> n;
    int m = n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        a[p] = 1;
        while (a[m] == 1)
        {
            printf("%d ", m);
            m--;
        }
        printf("\n");
    }
    return 0;
}