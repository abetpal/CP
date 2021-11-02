//author: nobrakebicycle
//created: 02.11.2021 20:53:46
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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int maxx = a[0];
        int minn = a[0];
        int sum = 0;
        cout << minn << endl;
        for (int i = 0; i < n - 1; i++)
        {
            maxx = max(minn, a[i + 1] - minn - sum);
            sum = sum + minn;
            minn = a[i + 1] - sum;
            cout << minn << endl;
        }
        cout << maxx << "\n";
    }
    return 0;
}