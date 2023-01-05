
#include<bits/stdc++.h>


using namespace std;

/*

x=max(a,b), y=max(a,c) and z=max(b,c)
            y=c              z=c
            
            x y z
            1 3 3
            1 1 3 not 
            3 3 3
            
            3 2 3 q1
            two num same
            those two number would be greatest
                leftout lefout     greatest
                2         2           3
 a b c 
 1 2 3
 1 3 3
 3 3 3

*/

int main() {
  int t,x,y,z;
  cin>>t;
  while(t--){
   cin>>x>>y>>z;
   // x y z
   // y x z
   // y z x
   // z y x
   if(x>y) swap(x,y);
   if(x>z) swap(x,z);
   if(y>z) swap(y,z);
   
   if(y!=z) cout<<"NO"<<endl;
   else cout<<"YES"<<endl<<x<<" "<<x<<" "<<z<<endl;
  }
  

  
  
  
  
  
  return 0;
}