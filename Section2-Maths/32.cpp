
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
      
      
        
*/

int main() {
      ll n,m,a;
      cin>>n>>m>>a;
      ll res=0;
      res+=(ceil(1.0*n/a)*ceil(1.0*m/a));
      cout<<res<<endl;
      
      
  return 0;
}