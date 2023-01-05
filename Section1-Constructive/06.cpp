
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>res;
        string s;
        cin>>s;
        int len=size(s);
        for(int i=0;i<len;i++){
            if(s[i]!='0'){
                int last_count=len-i-1;
                int num=(s[i]-'0')*pow(10,last_count);
                res.push_back(num);
            }
        }
        cout<<(int)res.size()<<endl;
        for(auto r:res)
        cout<<r<<" ";
        cout<<endl;
        
    }
}