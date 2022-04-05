// author: nobrakebicycle
// created: 02.04.2022 15:01:39
// Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int count = 1;
    while (T--)
    {
        cout << "Case #" << count << ": ";
        count++;
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end());

        int k = 1;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (k <= a[i])
            {
                c++;
                k++;
            }
            else
            {
                continue;
            }
        }
        cout << c << "\n";
    }
    return 0;
}