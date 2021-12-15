//author: nobrakebicycle
//created: 15.12.2021 10:17:42
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

    int curMax = 0;
    for (int i = 0; i < n; i++)
    {
        int curAns;
        cin >> curAns;
        curMax = max(curMax, curAns);
    }
    puts(curMax > 0 ? "HARD" : "EASY");
    return 0;
}