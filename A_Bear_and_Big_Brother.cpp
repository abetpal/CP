//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,b,c=0;
    cin>>l>>b;
    while (l<=b)
    {
        c+=1;
        l*=3;
        b*=2;
    }
    cout<<c;
    
}