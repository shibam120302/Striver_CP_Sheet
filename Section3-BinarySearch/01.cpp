
#include <bits/stdc++.h>

using namespace std;
#define ll long long

/*

BBBSSC

3:2:1 ratio
6 4 1 quantity
1 2 3 prices
4 rubles
*/

int main()
{
    string s;
    cin>>s;
    ll b1,b2,b3,p1,p2,p3;
    cin>>b1>>b2>>b3;
    cin>>p1>>p2>>p3;
    ll r;
    cin>>r;
    ll a=0,b=0,c=0;
    for(auto &ch:s){
        if(ch=='B') a++;
        else if(ch=='S') b++;
        else c++;
    }
    
    ll low=0,high=r+200;
    while(low<=high){
        ll mid=low+(high-low)/2;
        // mid denotes the number of hamburger we can make
        ll z=0;
        ll r1=max(a*mid-b1,z);
        ll r2=max(b*mid-b2,z);
        ll r3=max(c*mid-b3,z);
        ll price=r1*p1+r2*p2+r3*p3;
        if(price<=r) low=mid+1;
        else high=mid-1;
    }
    
    // low or high
    // when low==high
    // high-> ans and low=ans+1;
    // high=na-1;
    cout<<high;
    
    

    return 0;
}