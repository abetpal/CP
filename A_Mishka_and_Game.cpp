//author: nobrakebicycle
//created: 25.12.2021 16:55:58
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
    int c1 = 0, c2 = 0;
    int N, i, j;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d %d", &i, &j);
        if (i > j)
            c1++;
        if (i < j)
            c2++;
    }

    if (c1 > c2)
        printf("Mishka\n");
    if (c1 < c2)
        printf("Chris\n");
    if (c1 == c2)
        printf("Friendship is magic!^^\n");
    return 0;
    return 0;
}