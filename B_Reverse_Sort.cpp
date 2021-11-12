//author: nobrakebicycle
//created: 12.11.2021 20:15:35
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
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        int count = 0;
        int a[n];
        for (int k = 0; k < n; k++)
            a[k] = -1;
        for (; i < j; i++)
        {
            if (s[i] == '1')
            {
                for (; j > i; j--)
                {
                    if (s[j] == '0')
                    {
                        a[i] = i;
                        a[j] = j;
                        j--;
                        count = count + 2;
                        break;
                    }
                }
            }
        }
        if (count > 0)
        {
            cout << "1\n";
            cout << count << " ";
        }
        else
            cout << "0\n";
        for (int k = 0; k < n; k++)
        {
            if (a[k] != -1)
            {
                cout << a[k] + 1 << " ";
            }
        }
        if (count != 0)
            cout << "\n";
    }
    return 0;
}