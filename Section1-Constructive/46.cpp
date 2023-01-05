

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
   
   int t;
   cin>>t;
   while(t--){
        string p,h,n;
        cin>>p>>h;
        sort(begin(p),end(p));
        int n1=size(p),n2=size(h);
        bool flag=false;
        for(int i=0;i<=n2-n1;i++){
            n=h.substr(i,n1);
            sort(begin(n),end(n));
            if(n==p){
                flag=1;
                break;
            }
        }
        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
   }
   
  
    return 0;
    

}