//author: nobrakebicycle
//created: 19.12.2021 15:33:27
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
    vector<int> a(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;
    return 0;
}