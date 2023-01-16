https://codeforces.com/problemset/problem/1006/F

#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
ll n,m,k;
ll a[25][25];
map<ll,ll> d[30];
 
void dfs1(ll x,ll y,ll now){
	if(x>n||y>m)
		return;
	if(x+y==(n+m)/2+1){
		d[x][now]++;
		return;
	}
	dfs1(x+1,y,now^a[x+1][y]);
	dfs1(x,y+1,now^a[x][y+1]);
}
 
ll dfs2(ll x,ll y,ll now){
	if(x<1||y<1)
		return 0;
	if(x+y==(n+m)/2+1)
		return d[x][now];
	return dfs2(x-1,y,now^a[x][y])+dfs2(x,y-1,now^a[x][y]);
}
 
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	dfs1(1,1,a[1][1]);
	cout<<dfs2(n,m,k)<<endl;
	return 0;
}
