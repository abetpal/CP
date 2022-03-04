//author: nobrakebicycle
//created: 04.03.2022 21:21:27
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
vector<lli> si;
void unique_combination(lli l, lli sum, lli K,
                        vector<lli> &local,
                        vector<lli> &A)
{
    // If a unique combination is found
    if (sum == K)
    {
        si.push_back(local.size());
        // cout << "{";
        // for (int i = 0; i < local.size(); i++)
        // {
        //     if (i != 0)
        //         cout << " ";
        //     cout << local[i];
        //     if (i != local.size() - 1)
        //         cout << ", ";
        // }
        // cout << "}" << endl;
        return;
    }

    // For all other combinations
    for (lli i = l; i < A.size(); i++)
    {

        // Check if the sum exceeds K
        if (sum + A[i] > K)
            continue;

        // Check if it is repeated or not
        if (i > l and A[i] == A[i - 1])
            continue;

        // Take the element into the combination
        local.push_back(A[i]);

        // Recursive call
        unique_combination(i + 1, sum + A[i], K, local, A);

        // Remove element from the combination
        local.pop_back();
    }
}

// Function to find all combination
// of the given elements
void Combination(vector<lli> A, int K)
{

    // To store combination
    vector<lli> local;

    unique_combination(0, 0, K, local, A);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<lli, lli> mp;
    vector<lli> v;
    lli a = 1;
    lli i = 1;
    while (a < 10000000000000)
    {
        a = a * i;
        i++;
        mp[a] = 1;
    }

    a = 2;
    i = 1;
    while (a < 10000000000000)
    {
        a = pow(2, i);
        i++;
        mp[a] = 1;
    }
    for (auto i : mp)
    {
        v.push_back(i.first);
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << "\n";
    // }

    // cout << v.size();
    lli T;
    cin >> T;
    while (T--)
    {

        si.clear();
        lli n;
        cin >> n;
        int flag = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == n)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "1\n";
            continue;
        }

        Combination(v, n);
        if (si.empty())
        {
            cout << "-1\n";
        }
        else
        {
            sort(si.begin(), si.end());
            cout << si[0] << "\n";
        }
    }
    return 0;
}