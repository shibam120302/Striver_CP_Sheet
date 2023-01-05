
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
      
      (A+H)2=A2+B2
        HH + 2AH =  BB 
        A=(LL-HH)2*H
        
*/

int main() {
      double L,H;
      cin>>H>>L;
      cout<<fixed<<setprecision(13)<<((L*L-H*H)/(2*H));
      
      
  return 0;
}