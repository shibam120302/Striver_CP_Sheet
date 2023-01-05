
#include<bits/stdc++.h>


using namespace std;

/*
 n size of arr
 m sum of array
 |a[i]-a[i-1]|
 |a[1]-a[0]| + |a[2]-a[1]| + a[3]-a[2]..... maximize
 [1,1]
 [2,0]
 [0,2]
 5 size sum=5
 [0,2,0,3,0] 
 res= 2 + 2 + 3 + 3 = 10
 5 = 2+3 
 5 = 0+5 
 [0,5,0] -> 10
 [0,0,5,0,0] -> 10

[0,5]  -> [5,0] res=5
*/

int main() {
  long long t,n,m;
  cin>>t;
  while(t--){
   cin>>n>>m;
   if(n==1) cout<<0<<endl;
   else if(n==2) cout<<m<<endl;
   else cout<<2*m<<endl;
  }
  

  
  return 0;
}