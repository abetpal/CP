//author: nobrakebicycle
//created: 27.11.2021 10:45:33
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
        int n, k = 0, l = 0, count = 0, num1 = 0, num2 = 0, flag1 = 0, flag2 = 0;
        cin >> n;
        l = n - 1;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v, b;
        while (k < l)
        {
            if (a[k] != a[l])
            {
                num1 = a[k];
                num2 = a[l];
                break;
            }
            k++;
            l--;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != num1)
            {
                v.push_back(a[i]);
            }
            if (a[i] != num2)
            {
                b.push_back(a[i]);
            }
        }
        k = 0;
        l = v.size() - 1;
        while (k < l)
        {
            if (v[k] != v[l])
            {
                flag1 = 1;
                break;
            }
            k++;
            l--;
        }
        k = 0;
        l = b.size() - 1;
        while (k < l)
        {
            if (b[k] != b[l])
            {
                flag2 = 1;
                break;
            }
            k++;
            l--;
        }
        if (flag2 == 1 && flag1 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}