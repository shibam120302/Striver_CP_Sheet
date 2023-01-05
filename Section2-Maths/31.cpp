
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
      stick=l+l+b+b
      stick=2(l+b)
      stick/2=l+b
      3/2 -> ans
      10
      
     
      
        
*/

int main() {
      ll n,a,b,c;
      cin>>n;
      ll x=0,y=0,z=0;
      for(int i=0;i<n;i++){
          cin>>a>>b>>c;
          x+=a,y+=b,z+=c;
      }
    if(x==0 and y==0 and z==0 ) cout<<"YES";
    else cout<<"NO";
 
      
  return 0;
}