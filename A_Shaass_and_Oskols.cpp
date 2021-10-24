//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int T;
    cin >> T;
    int c, b;
    while (T--)
    {

        cin >> b >> c;
        if (b == 1)
        {
            a[b]+=a[b-1]-c;
            a[b-1]=0;
            
        }
        else if(b==n)
        {
            a[b-2]+=c-1;
            a[b-1]=0;
        }
        else{
            a[b-2]+=c-1;
             a[b]+=a[b-1]-c;
            a[b-1]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}