//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int c=1;
    while(c<10)
    {
        if((k*c-r)%10==0)
        break;
        else if((k*c)%10==0)
        break;
        c++;
    }
   cout<<c;
}