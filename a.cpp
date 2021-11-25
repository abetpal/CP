//author: nobrakebicycle
//created: 25.11.2021 16:16:46
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
    int count = 0;
    vector<int> prime;
    for (int i = 2; i <= n; i++)
    {
        int d = 0;
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                d++;
            }
        }
        if (d == 1)
        {
            prime.push_back(i);
            count++;
        }
    }
    cout << "Count=" << count << "\n";
    for (int i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << " ";
    }
    return 0;
}