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
    int a,n;
    cin>>n>>a;
    int c=0;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        if(b<=a)
        c++;
        else
        c=c+2;
    }
    cout<<c;
return 0;
}