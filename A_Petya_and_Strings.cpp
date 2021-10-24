//Author-nobrakebicycle
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    bool f=false;
    for (int  i = 0; i < a.length(); i++)
    {   
        if(tolower(a[i])>tolower(b[i])){
        cout<<1;
        f=true;
        break;
        }
        else if (tolower(a[i])<tolower(b[i]))
        {
            cout<<-1;
            f=true;
            break;
        }
        else
        continue;
    }
    if(!f)
    cout<<0;
    return 0;
}