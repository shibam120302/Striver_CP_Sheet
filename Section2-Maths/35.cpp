
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    
    /*
    128 64 32 16 8 4 2 1
    0   1  0  0  0 0 1 0
    even digits -> ans=n/2
    odd digits -> n/2 + 1 ( koi aur bit set hai)
    
    n/2 -> multiple of 4
    */
    
    string s;
    cin>>s;
    ll n=s.size(),cnt=0;
    ll res=n/2;
    if(n%2==0) 
    {cout<<res;
    return 0;}
    for(auto c:s) if(c=='1') cnt++;
    res+=(cnt>1);
    cout<<res;

    return 0;
}