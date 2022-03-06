//author: nobrakebicycle
//created: 06.03.2022 14:53:23
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
    vector<int> a;

    int mn = INT16_MAX;
    int mx = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if (c < mn)
        {
            mn = c;
        }
        if (c > mx)
        {
            mx = c;
        }
        a.push_back(c);
    }

    int mean = ceil((mx + mn) / (2.0));
    //cout << mn << " " << mx << " " << mean << "\n";
    sort(a.begin(), a.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mean)
        {
            count += abs(a[i] - mean);
        }
    }
    cout << count;

    return 0;
}