//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int g=0;
    char e='2';
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if(e!=s[1])
        g++;
        e=s[1];
        
    }
    cout<<g;
    
    return 0;
}