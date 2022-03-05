//author: nobrakebicycle
//created: 05.03.2022 15:47:16
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
    int k;
    cin >> k;
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int count = 0;
    for (auto i : mp)
    {
        if (i.second > k)
        {
            count++;

            n = n - i.second;
            cout << i.second << " " << n << "\n";
        }
    }

    count += ceil(n / (double)k);
    cout << count;
    return 0;
}