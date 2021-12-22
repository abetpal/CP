//author: nobrakebicycle
//created: 22.12.2021 17:21:33
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
        int A, B;
        cin >> A >> B;
        if (A > B)
            swap(A, B);
        cout << max(A * 2, B) * max(A * 2, B) << "\n";
    }
    return 0;
}