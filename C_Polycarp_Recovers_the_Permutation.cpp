//author: nobrakebicycle
//created: 25.11.2021 21:30:30
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
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = n;
        for (int i = 0, j = n - 1; i <= j;)
        {
            int right = a[j];
            int left = a[i];
            if (i == 0 && j == n - 1)
            {
                if (right != n && left != n)
                {
                    cout << "-1";
                    break;
                }
            }
            int maxx = max(left, right);
            //int minn = min(left, right);

            //cout << minn << "\n";
            if (maxx == left)
            {
                v.insert(v.begin(), maxx);
                //cout << maxx << "a\n";
                i++;
            }
            else
            {
                v.push_back(maxx);
                // cout << maxx << "b\n";
                j--;
            }

            /* if (minn == left)
            {
                v.insert(v.begin(), minn);
            }
            else
            {
                v.push_back(minn);
            }*/
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}