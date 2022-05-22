// author: nobrakebicycle
// created: 22.05.2022 21:40:31
// Hello Traveller
//  आज रपट जायें तो हमें ना कहियो
//  कल फिसल जायें तो हमें ना उठइयो
// Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
// Dher Mithai mein keeya padela
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int X = 5;
    int ml = 0;
    int beg = 0;
    map<int, int> w;
    int st = 0, en = 0;
    for (; en < N; en++)
    {
        w[A[en]]++;
        auto mini = w.begin()->first;
        auto maxi = w.rbegin()->first;
        if (maxi - mini <= X)
        {
            if (ml < en - st + 1)
            {
                ml = en - st + 1;
                beg = st;
            }
        }
        else
        {
            while (st < en)
            {
                w[A[st]]--;
                if (w[A[st]] == 0)
                {

                    w.erase(w.find(A[st]));
                }
                st++;
                auto mini = w.begin()->first;
                auto maxi = w.rbegin()->first;
                if (maxi - mini <= X)
                    break;
            }
        }
    }

    cout << ml << "\n";
}