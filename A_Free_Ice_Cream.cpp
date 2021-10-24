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
long long n,x,d=0;
    cin>>n>>x;
    while(n--){
        bool f=false;
        char o;
        long long c;
        cin>>o>>c;
        if(o=='+')
        {
            x+=c;
        }
        else{
            if(x<c){
            d++;
            f=true;
            }
            if(!f)
            x-=c;
        }
    }
    cout<<x<<" "<<d;
}