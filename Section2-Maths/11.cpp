
#include<bits/stdc++.h>


using namespace std;

/*

*/

int main() {
  long long t,a,b;
  cin>>t;
  while(t--){
   cin>>a>>b;
   if(a<b) a=2*a;
   else b=2*b;
   int area=max(a,b)*max(a,b);
   cout<<area<<endl;
   
  }
  

  
  return 0;
}