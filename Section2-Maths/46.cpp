
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
    n -> lenngth of lucky number
    1 , 2, 3, ... n
    
    _ -> 7,8
    _ _  -> 77 , 88 , 78 , 87
    
    _ _ _
    2*2*2 =8
    
    7 7 7
    7 7 8
    7 8 7
    8 7 7
    
    7 8 8
    8 8 7
    8 7 8
    
    8 8 8
    
    2+ 2*2 + 2*2*2 ... 2*2*2*... n
    
    r=2
    a=2
    s=a*(2^n-1)
   
   */
   ll n;
   cin>>n;
   cout<<2*((ll)pow(2,n)-1);
   

    return 0;
}