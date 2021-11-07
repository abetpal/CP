//author: nobrakebicycle
//created: 07.11.2021 17:32:22
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
    int n, cnt0 = 0, cnt1 = 0;
    string s;
    cin >> n >> s;
    for (auto i : s)
        if (i == '0')
            cnt0++;
        else
            cnt1++;
    cout << n - 2 * min(cnt0, cnt1) << endl;
    return 0;
}