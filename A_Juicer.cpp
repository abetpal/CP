//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,d,e=0,s=0;
    cin>>n>>b>>d;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    if(*min_element(v.begin(),v.end())>b)
    e=0;
    else{
        for (int i = 0; i < n; i++)
        {
            if(v[i]>b)
            continue;
            s+=v[i];
            if(s>d){
            e++;
            s=0;
            }
        }
        
    }
    cout<<e;
}