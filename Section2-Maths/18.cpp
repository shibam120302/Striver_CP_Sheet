
#include<bits/stdc++.h>


using namespace std;

/*

*/

int main() {
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       if(n%2==0) n-=1;
       cout<<n/2<<endl;
   }

  return 0;
}