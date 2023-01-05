
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
      
    even 3a/2 = 1.5*a
    greater than 1 , a-1
    
    1->1
    2->1
    2->3 loop
    4->6->9->12
    
*/

int main() {
     ll t,x,y;
     cin>>t;
     while(t--){
         cin>>x>>y;
         if(x==1&&y>1) cout<<"NO"<<endl;
         else if(x<=3 && y>3)  cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
     }
      
      
      
      
      
  return 0;
}