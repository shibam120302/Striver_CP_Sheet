
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
      ll n;
      cin>>n;
      if(n%2) {cout<<0; return 0;}
      n/=2;
      if(n%2) cout<<n/2;
      else cout<<(n/2-1);
 
      
  return 0;
}