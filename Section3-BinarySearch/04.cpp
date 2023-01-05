
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// t      t+1  t+2 ... t+10
// k=10 
int main()
{
    ll t,n,h;
    cin>>t;
    while(t--){
        cin>>n>>h;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        ll low=1,high=h;
        while(low<=high){
            ll mid=low+(high-low)/2;
            ll damage=0;
            for(int i=0;i<n-1;i++)
            damage+=(v[i]+mid>v[i+1]?v[i+1]-v[i]:mid);
            damage+=mid;
            if(damage>=h) high=mid-1;
            else low=mid+1;
        }
        // ans ??
        cout<<low<<endl;
    }

    return 0;
}