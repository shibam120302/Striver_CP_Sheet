#include<bits/stdc++.h>
using namespace std;
long long dp[100001];
map<long long,string>mp;
void ans(long long n){
	if(n==0){
		return;
	}
	ans(n-mp[dp[n]].size());
	cout<<mp[dp[n]]<<" ";
}
int main(){
	int n;
	string s;
	cin>>n>>s;
	int m;
	cin>>m;
	long long h;
	for(int i=0;i<m;i++){
		string w;
		cin>>w;
		h=0;
		for(int j=0;j<w.size();j++){
			h=h*31+tolower(w[j]);
		}
		mp[h]=w;
	}
	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}
	dp[0]=0;
	for(int i=0;i<n;i++){
		h=0;
		for(int j=i;j>=0;j--){
			h=h*31+s[j];
			if(dp[j]!=-1&&mp.count(h)){
				dp[i+1]=h;
				break;
			}
		}
	}
	ans(n);
}
