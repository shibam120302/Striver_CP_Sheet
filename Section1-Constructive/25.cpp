


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int prev=-1;
        int res=0;
        for(int i=0;i<size(s);i++){
            if(s[i]=='1'){
                if(prev!=-1) res+=(i-prev-1);
                prev=i;
    
            }
        }
        cout<<res<<endl;
    }

    return 0;
}