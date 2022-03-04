//author: nobrakebicycle
//created: 04.03.2022 22:28:59
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
    int T;
    cin >> T;
    while (T--)
    {
        lli num;
        cin >> num;
        vector<lli> arr(num);
        for (lli i = 0; i < num; i++)
        {
            cin >> arr[i];
        }

        lli z = 1;
        sort(arr.begin(), arr.end());
        lli ac = arr[0], k = num - 2, ar = arr[num - 1], ao = 1, at = 1;
        int ans = 0;
        while (z <= k)
        {
            if (ar > ac && at < ao)
            {
                ans = 1;
                break;
            }
            else if (k + 1 <= num / 2)
            {
                ans = 0;
                break;
            }
            else if (ac >= ar)
            {
                ar += arr[k];
                k--;
                at++;
            }
            else
            {
                ac += arr[z];
                z++;
                ao++;
            }
        }
        if (ar > ac && at < ao)
        {
            ans = 1;
        }
        if (ans)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}
