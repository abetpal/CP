// author: nobrakebicycle
// created: 30.04.2022 14:13:24
// Hello Traveller
//  आज रपट जायें तो हमें ना कहियो
//  कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

const int MAX = 104;

int memo[MAX][MAX];

int oSRec(vector<int> arr, int i, int j, int sum)
{
    if (j == i + 1)
        return max(arr[i], arr[j]);

    if (memo[i][j] != -1)
        return memo[i][j];

    memo[i][j] = max((sum - oSRec(arr, i + 1, j, sum - arr[i])),
                     (sum - oSRec(arr, i, j - 1, sum - arr[j])));

    return memo[i][j];
}

int optimalStrategyOfGame(vector<int> arr, int n)
{
    int sum = 0;
    sum = accumulate(arr.begin(), arr.end(), sum);

    memset(memo, -1, sizeof(memo));

    return oSRec(arr, 0, n - 1, sum);
}
int main()
{
    string s, name;
    getline(cin, s);
    // cout << s;
    cin >> name;
    // cout << name;

    char str[s.length()];

    for (int i = 0; i < s.length(); i++)
    {
        str[i] = s[i];
    }

    char *token = strtok(str, " ");
    vector<int> tokens;

    while (token != NULL)
    {
        int a = stoi(token);
        tokens.push_back(a);
        token = strtok(NULL, " ");
    }

    int sum1 = optimalStrategyOfGame(tokens, tokens.size());

    int sum = 0;
    sum = accumulate(tokens.begin(), tokens.end(), sum);

    int sum2 = sum - sum1;

    if (sum1 > sum2)
    {
        cout << name;
    }

    if (sum2 > sum1 && name == "alice")
    {
        cout << "bob";
    }
    if (sum2 > sum1 && name == "bob")
    {
        cout << "alice";
    }

    if (sum1 == sum2)

    {
        cout << "draw";
    }
}