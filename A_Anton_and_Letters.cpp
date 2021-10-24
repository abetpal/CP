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
   string s;
    getline(cin,s);
    set <char> a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{'||s[i]=='}'||s[i]==' '||s[i]==',')
        continue;
        else{
            a.insert(s[i]);
        }
    }
    cout<<a.size();
return 0;
}