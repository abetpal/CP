//author: nobrakebicycle
//created: 22.11.2021 20:13:19
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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool big;

        int count = 0;
        big = b[n - 1] > a[n - 1];
        if (big)
            count++;

        for (int i = n - 2; i >= 0; i--)
        {
            if (b[i] > a[i])
            {
                big = true;
                count++;
            }
            else if (b[i] < a[i])
            {
                big = false;
            }
            else
            {
                if (big)
                    count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}