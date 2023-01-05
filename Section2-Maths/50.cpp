
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fun( ll num){
    ll res1=-1,res2=10;
    while(num>0){
        ll d=num%10;
        res1=max(res1,d);
        res2=min(res2,d);
        num/=10;
    }
    return res1*res2;
}
int main()
{
   /*
    
   
   */
   ll t,a,k;
   cin>>t;
   while(t--){
       cin>>a>>k;
       while(--k){
           ll nxt=a+fun(a);
           if(a==nxt) break;
           a=nxt;
       }
       cout<<a<<endl;
   }
    return 0;
}