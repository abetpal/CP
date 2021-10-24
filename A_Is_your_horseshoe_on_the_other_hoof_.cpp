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
    set <int> s;
    int a;
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);

    cout<<(4-s.size());
    
return 0;
}