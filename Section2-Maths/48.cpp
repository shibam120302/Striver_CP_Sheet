
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
    
    S=s1+s2
    S=g*m + g*n -> g is gcd
    S=g*(m+n)
    g>1 m+n>1
    
    s= _ * _
    1+2+3=6
    
    1 ,2 ,3 , 4 , 5, 6
    even 2+4=6
    odd 1+3=4
     
     1 2 3 4 5 6 7 8 9 10 11
     1 np
     2 np
     3
   
   */
   int n;
   cin>>n;
   if(n<=2) {cout<<"No"<<endl; return 0;}
   
   cout<<"Yes"<<endl;
   cout<<n-1;
   for(int i=1;i<=n-1;i++)
   cout<<" "<<i;
   cout<<endl;
   cout<<1<<" "<<n<<endl;
   
    return 0;
}