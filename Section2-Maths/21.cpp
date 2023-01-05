
#include<bits/stdc++.h>


using namespace std;

/*

*/

int main() {
       int m,n;
       cin>>m>>n;
       int res=m*(n/2);
       if(n%2) res+=(m/2);
       cout<<res;
  return 0;
}