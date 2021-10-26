//author: nobrakebicycle
//created: 25.10.2021 19:42:16
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
    int min = 1000000000;
    int max = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > min && a[i] < max)
            c++;
    }
    cout << c;
    return 0;
}