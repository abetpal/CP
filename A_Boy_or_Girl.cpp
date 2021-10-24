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
    int a[26]={0};
    for(int i=0;i<s.length();i++)
    {
        a[((int)s[i])-97]=1;
    }
    int c;
    for(int i=0;i<26;i++)
    {
        if(a[i]==1)
        {
            c++;
        }
    }
    
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
return 0;
}