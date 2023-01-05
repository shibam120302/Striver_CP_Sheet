
#include<bits/stdc++.h>


using namespace std;

/*
 n=4
 pos 0 1      2 3
 val 2 4      1 5 
 diff=2
 odd + odd(diff)=even
 odd + even(diff) = ans
 
 n=8
 pos 0 1 2 3   4 5 6 7
 val 2 4 6 8   1 3 5 11
 extra = n/2;
 diff=n/2 =8/2=4;
 sum1=20
 sum2=16
 diff=4
*/

int main() {
  long long t,n;
  cin>>t;
  while(t--){
   cin>>n;
   int diff=n/2;
   if(diff%2){
       cout<<"NO"<<endl;
       continue;
   }
   cout<<"YES"<<endl;
   int i=2;
   while(--n){
       cout<<i<<" ";
       if(i==2*diff) i=1;
       else i+=2;
   }
   cout<<i+diff<<endl;
  }
  
  return 0;
}