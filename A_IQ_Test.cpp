//author: nobrakebicycle
//created: 02.11.2021 10:34:29
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
char s[5][5];
int C(int x, int y)
{
    return s[x][y] == '#';
}
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
        {
            if (C(i, j) + C(i + 1, j) + C(i, j + 1) + C(i + 1, j + 1) != 2)
            {
                puts("YES");
                return 0;
            }
        }
    puts("NO");
}