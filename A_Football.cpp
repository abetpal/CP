//author: nobrakebicycle
//created: 27.10.2021 12:18:37
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(std::pair<std::string, int> p, std::pair<std::string, int> q)
{
    return p.second < q.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, int> m;
    pair<string, int> ma;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        m[s]++;
    }
    ma = (*std::max_element(m.begin(), m.end(), compare));
    cout << ma.first;
    return 0;
}