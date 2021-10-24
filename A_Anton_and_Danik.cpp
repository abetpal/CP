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
    vector <char> v;
    for(int i=0;i<n;i++)
{
    char c;
    cin>>c;
    v.push_back(c);
}
int a=0,d=0;
for (int i = 0; i < n; i++)
{
    if(v[i]=='A')
    a+=1;
    else
    d+=1;
}
if(a>d)
cout<<"Anton";
else if(d>a)
cout<<"Danik";
else
cout<<"Friendship";
}