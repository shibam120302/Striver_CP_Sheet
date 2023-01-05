
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
   a -> individual
   b -> both
   2*a < b , a dollar way
   b dollar way
   _ _ _ _ _ _


 
   
   */
   ll t,x,y,a,b;
   cin>>t;
   while(t--){
     cin>>x>>y>>a>>b;
     ll res=0;
     int m=min(x,y);
     if(b<2*a) x-=m , y-=m , res=m*b;
     res+=(x+y)*a;
     cout<<res<<endl;
   }






    return 0;
}