

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string card;
    cin>>card;
    std::vector<string>hands(5) ;
    for(int i=0;i<5;i++)
    cin>>hands[i];

    for(auto h:hands){
        // rank match or suite
        if(h[0]==card[0]||h[1]==card[1]) {
            cout<<"YES"; 
            return 0;
        }
    }
    cout<<"NO";
    return 0;
    
}
