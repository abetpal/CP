//author: nobrakebicycle
//created: 27.10.2021 12:18:37
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    map<string, int> vals;
    vals["Tetrahedron"] = 4;
    vals["Cube"] = 6;
    vals["Octahedron"] = 8;
    vals["Dodecahedron"] = 12;
    vals["Icosahedron"] = 20;
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        res += vals[s];
    }
    cout << res << endl;
    return 0;
}