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
    cin>>s;
    char cp='a';
    int r=0;
    for(int i=0;i<s.length();i++)
    {
        if(abs((int)s[i]-(int)cp)<=13)
        {
            r+=abs((int)s[i]-(int)cp);
        }
        else{
            r+=26-abs((int)s[i]-(int)cp);
        }
        cp=s[i];
    }
    cout<<r;
return 0;
}