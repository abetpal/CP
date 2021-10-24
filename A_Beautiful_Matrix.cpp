//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>v(5,vector<int> (5));
    int r=0,c=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin>>a;
            v[i][j]=a;
            if (a==1){
                c=j+1;
                r=i+1;
            }
        }
    }
    cout<<abs(3-r)+abs(3-c);
    return 0;
}