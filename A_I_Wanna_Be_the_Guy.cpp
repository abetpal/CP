//author: nobrakebicycle
//created: 26.10.2021 17:12:23
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
    int n;
    cin >> n;
    int p;
    cin >> p;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    if (s.size() == n)
    {
        cout << "I become the guy.";
    }
    else
        cout << "Oh, my keyboard!";
    return 0;
}