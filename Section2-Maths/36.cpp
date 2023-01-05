
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    
    /*
     0,0   -> a,b
     hd = a 
     vd =b
     dist >=a+b
     manhattan dist
     number of wrong moves=number of right moves
     total extra moves should be even
    */
    ll a,b,d;
    cin>>a>>b>>d;
    ll extra=d-abs(a)-abs(b);
    if(extra<0 or extra%2) cout<<"NO";
    else cout<<"YES";
 

    return 0;
}