//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0,d=0;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int i=1,idx,g;
    while(v.size()>0){
        if(v[0]>v[v.size()-1])
        {
            g=v[0];
            idx=0;
        }
        else
        {
            g=v[v.size()-1];
            idx=v.size()-1;
        }
        if (i%2!=0)
        s+=g;
        else
        d+=g;
        i++;
        v.erase(v.begin()+idx);
    }
    cout<<s<<" "<<d;
    
    return 0;
}