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
    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    c=6-c+1;
    if(c==0)
    cout<<"0/1";
    if(c==1)
    cout<<"1/6";
    if(c==2)
    cout<<"1/3";
    if(c==3)
    cout<<"1/2";
    if(c==4)
    cout<<"2/3";
    if(c==5)
    cout<<"5/6";
    if(c==6)
    cout<<"1/1";
return 0;
}