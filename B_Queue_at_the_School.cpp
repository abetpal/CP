//author: nobrakebicycle
//created: 16.11.2021 19:49:04
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
    string str;
    int cnt = 0;
    int n, x;
    cin >> n >> x >> str;
    for (int j = 0; j < x; j++)
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                str[i] = 'G';
                str[i + 1] = 'B';
                i++;
            }
        }
    cout << str << endl;
    return 0;
}