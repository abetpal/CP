//author: nobrakebicycle
//created: 31.10.2021 19:17:57
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
    char s[1000];
    char s1[1000];
    int l, l1, i, p, tot;
    scanf("%s", s);
    scanf("%s", s1);

    l = strlen(s);
    l1 = strlen(s1);
    for (i = 0; i < l; i++)
        if (s[i] == '|')
        {
            p = i;
            break;
        }
    if ((l - 1 + l1) % 2 != 0)
    {
        printf("Impossible\n");
        return 0;
    }
    if (p + l1 < l - p - 1)
    {
        printf("Impossible\n");
        return 0;
    }
    if (p > l - p - 1 + l1)
    {
        printf("Impossible\n");
        return 0;
    }
    tot = l - 1 + l1;
    for (i = 0; i < p; i++)
        printf("%c", s[i]);
    for (i = 0; i < tot / 2 - p; i++)
        printf("%c", s1[i]);
    printf("|");
    for (i = p + 1; i < l; i++)
        printf("%c", s[i]);
    for (i = tot / 2 - p; i < l1; i++)
        printf("%c", s1[i]);
    printf("\n");
    return 0;
}