
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
   5
 4 3 4 3 2 4
energy=0+1-1+1-1

   
   
 
   
   */
   ll n,x,energy=0,res=0,prev=0;
   cin>>n;
   while(n--){
     cin>>x;
     energy+=(prev-x);
     if(energy<0) res-=energy , energy=0;
     prev=x;
    
   }
    cout<<res;

    return 0;
}