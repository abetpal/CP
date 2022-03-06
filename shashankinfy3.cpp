// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find minimum adjacent
// swaps required to make all the
// same character adjacent
int summ(vector<int> S, int n, int i, int j)
{
    int k = 0;
    for (int l = i + 1; l < j; l++)
    {
        k = +abs(S[i] - S[l]);
    }
    return k;
}
int minSwaps(vector<int> S, int n)
{
    // Initialize answer
    int swaps = 0;

    // Create a 2D array of size 26
    vector<vector<int>> arr(18);

    // Traverse the string
    for (int i = 0; i < n; i++)
    {

        // Get character
        int pos = S[i] - 1;

        // Append the current index in
        // the corresponding vector
        arr[pos].push_back(i);
    }
    vector<int> sum1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += S[i];
        sum1.push_back(sum);
    }
    // Traverse each character from a to z
    for (int ch = 0; ch <= 17; ++ch)
    {
        int pos = ch;

        // Add difference of adjacent index
        for (int i = 1;
             i < arr[pos].size(); ++i)
        {
            cout << arr[pos][i] << " " << arr[pos][i - 1] << " ";
            swaps += summ(S, n, (arr[pos][i - 1]), (arr[pos][i]));
        }
    }

    // Return answer
    return swaps;
}

// Driver Code
int main()
{
    // Given string
    vector<int> a = {1, 4, 4, 1};

    // Size of string
    int N = a.size();

    // Function Call
    cout << minSwaps(a, N);

    return 0;
}
