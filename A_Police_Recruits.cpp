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
    int n;
    cin >> n;
    int sum=0;int ut=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            sum=sum+x;
        }
        else
        {
            if(sum>0)
            sum--;
            else{
                ut++;
            }
        }
    }
    cout<<ut;
return 0;
}