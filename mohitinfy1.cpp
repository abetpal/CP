//author: nobrakebicycle
//created: 05.03.2022 15:05:11
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
    deque<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    unordered_map<int, int> count;

    for (int i = 0; i < n; i++)
    {
        if (count.find(a[i]) == count.end())
            count[a[i]] = 1;
        else
            count[a[i]]++;
    }
    int count1 = 0;
    for (int i = 0; i < n;)
    {
        if (count[a[i]] > 1)
        {
            if (count.find(a[i] * 2) == count.end())
                count[a[i] * 2] = 1;
            else
                count[a[i] * 2]++;
            a.push_back(a[i] * 2);
            count[a[i]] -= 2;
            count1++;
            n++;
            i++;
        }
        else
        {
            i++;
        }
    }
    cout << count1;

    return 0;
}