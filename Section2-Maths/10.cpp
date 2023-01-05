
#include<bits/stdc++.h>


using namespace std;

/*
 1 2 3 4
 4 akela 
 1+ 3=4
 2,4,4
 
 1 2 3 4 5 6 7 8 
*/

int main() {
  long long t,n;
  cin>>t;
  while(t--){
   cin>>n;
   if(n<=2) cout<<1<<endl;
   else cout<<1+(n-1)/2<<endl;
  }
  

  
  return 0;
}