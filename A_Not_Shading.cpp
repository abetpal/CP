//author: nobrakebicycle
//created: 16.01.2022 11:45:37
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
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        --r;
        --c;
        bool is = false;
        bool row = false;
        bool col = false;
        bool sol = false;
        vector<vector<char>> C(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> C[i][j];
                if (i == r and j == c and C[i][j] == 'B')
                {
                    is = true;
                }
                if (i == r and C[i][j] == 'B')
                {
                    row = true;
                }
                if (j == c and C[i][j] == 'B')
                {
                    col = true;
                }
                if (C[i][j] == 'B')
                {
                    sol = true;
                }
            }
        }
        int ans = -1;
        if (is)
            ans = 0;
        else if (row || col)
            ans = 1;
        else if (sol)
            ans = 2;
        cout << ans << '\n';
    }
    return 0;
}