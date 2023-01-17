https://codeforces.com/contest/1294/problem/F

#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> g[200005];
int d[200005],fa[200005],del[200005];
void dfs(int u,int f)
{
	d[u]=d[f]+1;fa[u]=f;
	for(int v:g[u])if(v!=f)dfs(v,u);
}
int main()
{
	scanf("%d",&n);
	for(int u,v,i=1;i<n;++i)scanf("%d%d",&u,&v),g[u].push_back(v),g[v].push_back(u);
	dfs(1,0);
	int u=0,v=0;
	for(int i=1;i<=n;++i)if(d[u]<d[i])u=i;
	memset(d,0,sizeof(d));
	dfs(u,0);
	for(int i=1;i<=n;++i)if(d[v]<d[i])v=i;
	int ans=d[v]-1;
	int x=v;
	while(x)del[x]=1,x=fa[x];
	x=v;
	memset(d,0,sizeof(d));
	while(x)
	{
		for(int p:g[x])if(!del[p])dfs(p,x);
		x=fa[x];
	}
	int w=0;
	for(int i=1;i<=n;++i)if(i!=u&&i!=v&&d[w]<=d[i])w=i;
	printf("%d\n",d[w]+ans);
	printf("%d %d %d\n",u,v,w);
}
