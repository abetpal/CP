//author: nobrakebicycle
//created: 05.11.2021 08:51:09
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
    int n, k, a;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
        ans += (v[i] >= v[k - 1]) && (v[i] > 0);
    cout << ans << '\n';
    return 0;
}
