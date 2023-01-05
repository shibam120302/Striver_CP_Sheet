
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
   n m k
   n/k -> each player cards
   m total jokers
   
   m/2 m/2 =0
   max jokers in 1 hand - max of all jokers in other
   
   n=9, m=6, k=3.
   cards in each hand=3
   max joker=3
   left jokers=3
   1.5 1.5
   0 3
   1 2
   points=3-2=1
   3/2=1.5
   _ _ _ _ _ _


 
   
   */
   ll t,n,m,k;
   cin>>t;
   while(t--){
       cin>>n>>m>>k;
       ll c=n/k;
       if(c>=m) cout<<m<<endl;
       else{
           ll rem=m-c;
           ll other=ceil(1.0*rem/(k-1));
           cout<<c-other<<endl;
       }
   }






    return 0;
}