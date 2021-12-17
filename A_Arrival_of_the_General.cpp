//author: nobrakebicycle
//created: 17.12.2021 17:26:49
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int n, i, p, q = 99, x, a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (std::cin >> n; i++ < n;)
        std::cin >> x, x > p ? p = x, b = i : 0, x <= q ? q = x, a = i : 0;
    std::cout << b + n - a - 1 - (b > a);
    return 0;
}