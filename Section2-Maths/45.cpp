
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
    HCF (x,y ) = z;
    n(x)->a
    n(y)->b
    n(z)->c
    
    gcd -> c , 11111...
    x -> 1111 * 2 * 2 * 2
    y -> 1111 * 3 * 3
   
   99 * 2 -> 3 digit num
   99 * 3 -> 3 digit num
   
  c -> 3
  101
   
   */
   ll t,a,b,c,x,y,z;
   cin>>t;
   while(t--){
     cin>>a>>b>>c;
     z=pow(10,c-1);
     x=z,y=z;
     while(to_string(x).size()<a) x=2*x;
      while(to_string(y).size()<b) y=3*y;
      cout<<x<<" "<<y<<endl;
     
   }
    

    return 0;
}