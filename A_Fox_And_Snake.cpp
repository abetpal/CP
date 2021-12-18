//author: nobrakebicycle
//created: 18.12.2021 19:35:45
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < m; j++){
            if(i%4==0)
                if(j==0)cout << "#";
                else cout << ".";
            else if(i%4==2)
                if(j==m-1)cout << "#";
                else cout << ".";
            else
                cout << "#";
        }
        cout << "\n";
    }
return 0;
}