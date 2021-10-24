//Author-nobrakebicycle
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
    ll int n, k;
    cin >> n >> k;
    char word[26];

    for (int i = 0; i < 26; i++)
    {
        word[i] = (char)(i + 97);
    }
    int j = 0;
    string pass;
    for (int i = 0; i < n; i++)
    {
        if (j < k)
        {
            pass += word[j];
            j++;
        }
        else
        {
            j = 0;
            i--;
        }
    }
    cout << pass << endl;
}