//author: nobrakebicycle
//created: 18.11.2021 04:24:37
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int ok(int x)
{
    set<int> s;
    int len = 0;
    while (x)
    {
        len++;
        s.insert(x % 10);
        x /= 10;
    }
    return s.size() == len;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = n + 1;; ++i)
    {
        if (ok(i))
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}