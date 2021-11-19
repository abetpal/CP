//author: nobrakebicycle
//created: 19.11.2021 09:48:15
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
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int a11, a22, a33, a44, a55, a66, a77, a88, a99;
    cin >> a1 >> a2 >> a3;
    cin >> a4 >> a5 >> a6;
    cin >> a7 >> a8 >> a9;
    a11 = a1 + a2 + a4;
    a22 = a1 + a3 + a2 + a5;
    a33 = a3 + a6 + a2;
    a44 = a4 + a5 + a1 + a7;
    a55 = a5 + a2 + a4 + a6 + a8;
    a66 = a3 + a9 + a5 + a6;
    a77 = a7 + a8 + a4;
    a88 = a8 + a9 + a7 + a5;
    a99 = a9 + a8 + a6;
    cout << ((a11 + 1) % 2) << ((a22 + 1) % 2) << ((a33 + 1) % 2) << endl;
    cout << ((a44 + 1) % 2) << ((a55 + 1) % 2) << ((a66 + 1) % 2) << endl;
    cout << ((a77 + 1) % 2) << ((a88 + 1) % 2) << ((a99 + 1) % 2);
    return 0;
}