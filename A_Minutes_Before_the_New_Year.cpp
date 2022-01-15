//author: nobrakebicycle
//created: 15.01.2022 19:56:56
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
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; ++i)
    {
        int h, m;
        scanf("%d %d", &h, &m);
        printf("%d\n", 1440 - h * 60 - m);
    }
    return 0;
}