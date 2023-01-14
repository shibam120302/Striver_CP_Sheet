https://codeforces.com/contest/1016/problem/B

#include <bits/stdc++.h>
using namespace std;
int cnt[1005],n,m,q,l,r;
string s,t;
int main(){
	cin>>n>>m>>q>>s>>t;
	for (int i=0;i<=n-m;++i) cnt[i+1]=cnt[i]+(s.substr(i,m)==t);
	while (q--){
		cin>>l>>r;
		if (r-l+1<m) cout<<"0\n";
		else cout<<cnt[r-m+1]-cnt[l-1]<<endl;
	}
}
