https://codeforces.com/contest/1602/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
    while(t--){
        int n;
		cin>>n;
        int a[n]; 
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=0;i<30;i++){
            int cnt=0;
            for(int j=0;j<n;j++) cnt+=(a[j]>>i&1);
            ans=__gcd(ans,cnt);
        }
        for(int i=1;i<=n;i++){
            if(ans%i==0) cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
