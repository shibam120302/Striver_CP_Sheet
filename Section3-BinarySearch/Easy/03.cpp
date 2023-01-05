
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sum(ll n){
    return (n*(n+1))/2;
}

int main()
{
    ll n,k;
    cin>>n>>k;
    n-=1;
    ll s=sum(k-1);
    if(s<n)
    cout<<-1;
    else{
        ll l=0,h=k-1;
        while(l<=h){
            ll mid=l+(h-l)/2;
            if(s-sum(mid)>=n) l=mid+1;
            else h=mid-1;
        }
        cout<<k-1-h; // k-1-(h+1)+1
    }

    return 0;
}
