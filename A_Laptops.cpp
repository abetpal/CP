//author: nobrakebicycle
//created: 13.11.2021 23:25:49
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
    int n;
    cin >> n;
    bool ada = false;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
            ada = true;
    }
    if (ada)
        printf("Happy Alex\n");
    else
        printf("Poor Alex\n");
    return 0;
}