
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
    
    
     
     6+12+18  +1 
     6(1+2+3... n) +1
     6*Sn +1
     3*n*(n+1) +1
   
   */
   ll n;
   cin>>n;
   ll res=(3*n*(n+1))+1;
   cout<<res;
   
    return 0;
}