//author: nobrakebicycle
//created: 25.10.2021 09:02:19
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        a[b - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}