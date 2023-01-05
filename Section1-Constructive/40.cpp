

#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*
   shop-1  1 donut       a  price
   shop-2  b donuts      c price  (boxes)
   a=5  b=10  c=4
   -1   10
   
    a=4 b=5 c=20
    1   -1
    
    a=2 b=2  c=3
    1   2
   
   */
   
   int t;
   cin>>t;
   while(t--){
       long long a,b,c,f,s;
       f=-1,s=-1;
       cin>>a>>b>>c;
       if(a<c) f=1;
       if(b*a>c) s=b;
       cout<<f<<" "<<s<<endl;
   }
   
    return 0;
    
    
    
    
    
    
    
    
    
}