
#include<bits/stdc++.h>


using namespace std;

/*

*/

int main() {
   int t,a,b;
   cin>>t;
   while(t--){
       cin>>a>>b;
       if(a%b==0) cout<<0<<endl;
       else{
           int r=a%b;
           cout<<b-r<<endl;
       }
   }

  return 0;
}