
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
   n k where n->slot k->sum
1 5  5  sum=5
4 3  2 2 1 1 sum=3*2=6
8 8
8 17 
 
 sum*f -> n
 f-> n/sum -> n/k
 ceil(n/k)
 n*f2=k
 
   
   */
   ll t;
   cin>>t;
   double n,k;
   while(t--){
       cin>>n>>k;
       ll f=ceil(n/k);
       k=k*f;
       int res=ceil(k/n);
       cout<<res<<endl;
   }






    return 0;
}