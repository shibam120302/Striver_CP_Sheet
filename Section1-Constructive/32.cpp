
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int res=-1;
   if(n==m){
       cout<<"0";
       return 0;
   }else if(m%n==0){
       res=0;
       int d=m/n;
       while(d%2==0) d/=2,res++;
       
       while(d%3==0) d/=3 , res++;
       if(d!=1) res=-1;
   }
   cout<<res;
    return 0;
}