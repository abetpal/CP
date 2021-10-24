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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int cal=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            cal+=a;
        }
         if(s[i]=='2')
        {
            cal+=b;
        }
         if(s[i]=='3')
        {
            cal+=c;
        }
         if(s[i]=='4')
        {
            cal+=d;
        }

    }
    cout<<cal;
return 0;
}