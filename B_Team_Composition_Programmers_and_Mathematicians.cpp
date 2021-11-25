//author: nobrakebicycle
//created: 25.11.2021 20:07:45
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + b;
        int team = sum / 4;
        int minimum = min(a, b);
        int answer = min(minimum, team);

        cout << answer << endl;

        t--;
    }

    // your code goes here
    return 0;
}