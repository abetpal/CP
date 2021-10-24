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
    int T;
    cin >> T;
    while(T--) {  
        string s;
        cin>>s;
        if(s.length()<=10)
        cout<<s<<"\n";
        else
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
        } 
    }
return 0;
}