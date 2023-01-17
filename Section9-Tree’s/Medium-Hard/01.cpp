https://codeforces.com/contest/1006/problem/E

#include<bits/stdc++.h>
using namespace std;
int n,q,k,i,x,t=1,s[200179],f[200179],r[200179];
set<int>g[200179];
void dfs(int v){
r[t]=v;
s[v]=t++;
for(auto x:g[v])dfs(x);
f[v]=t;
}
int main(){
for(cin>>n>>q,i=2;i<=n;i++)cin>>x,g[x].insert(i);
dfs(1);
for(;q--;)
cin>>x>>k,
cout<<(k<=f[x]-s[x]?r[s[x]+k-1]:-1)<<" ";
}
