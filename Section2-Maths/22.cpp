
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*

*/

int main() {
       ll m,n,k,x;
       cin>>n>>m>>k;
       int m1=0,m2=0;
       for(int i=0;i<n;i++){
           cin>>x;
           if(x>m1) m2=m1,m1=x;
           else if(x>m2) m2=x;
       }
       ll times=m/(k+1);
       ll cost = k*m1+m2;
       cost=cost*times;
       cost+=(m%(k+1)*m1);
       cout<<cost;
  return 0;
}