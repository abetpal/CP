//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    string b;
    cin>>a;
    cin>>b;
    int d =0;
    int c=0;
    for(int i=0;i<b.length();i++)
    {
        if(b[i]==a[d])
        {
            d++;
            c++;
        }
    }
    cout<<c+1;


return 0;
}