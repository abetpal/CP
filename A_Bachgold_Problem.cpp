//author: nobrakebicycle
//created: 02.01.2022 11:16:42
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
    int i, n;
    scanf("%d", &n);
    printf("%d\n", n / 2);
    for (i = 1; i < n / 2; i++)
        printf("2 ");
    printf("%d", n % 2 + 2);
    return 0;
}