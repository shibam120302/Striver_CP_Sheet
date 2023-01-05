https://codeforces.com/contest/689/problem/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll n;cin>>n;
    ll st=0,en=1e16,ans=-1;
    while(st<=en)
    {
        ll mid=(st+en)/2;
        ll sum=0;
        for(ll i=2;i*i*i<=mid;i++)sum+=mid/(i*i*i);
        if(sum==n)ans=mid;
        if(sum>=n)en=mid-1;
        else st=mid+1;
    }
    cout <<ans << endl;
    return 0;
}
