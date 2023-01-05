
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*


*/

int main() {
       ll x,y,z;
       cin>>x>>y>>z;
       ll total=(x+y)/z;
       cout<<total<<" ";
       ll another=x/z + y/z;
       // x->y
       ll a=z-(y%z);
       ll b=z-(x%z);
       if(total>another) cout<<min(a,b);
       else cout<<0;
       
  return 0;
}