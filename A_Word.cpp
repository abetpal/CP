//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,l,u;
    cin>>s;
    int c=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z'){
            u+=s[i];
            l+=s[i]+32;
    }
    else{
        c++;
        u+=s[i]-32;
        l+=s[i];
    }
    }
    if(c<(s.length()/2.0))
    cout<<u;
    else
    cout<<l;
}