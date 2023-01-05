
#include<bits/stdc++.h>


using namespace std;

/*

*/

int main() {
   int t,a,b;
   cin>>t;
   while(t--){
       cin>>a>>b;
       int res=abs(a-b);
       res=ceil(res/10.0);
       cout<<res<<endl;
   }

  return 0;
}