https://codeforces.com/problemset/problem/1151/B


#include<iostream>
using namespace std;
int n,m,a[1000][1000],i,j,p,t;
int main()
{
	cin>>n>>m; for(i=1;i<=n;i++) for(j=1;j<=m;j++) cin>>a[i][j];
	for(j=1;j<=n;j++){ p=a[j][1]^p; }
	if(p!=0){cout<<"TAK"<<endl; for(t=1;t<=n;t++) cout<<1<<' '; return 0;}
	else
	{
		for(i=1;i<=n;i++) for(j=2;j<=m;j++) if(a[i][1]!=a[i][j]){ cout<<"TAK"<<endl; for(t=1;t<=n;t++){if(t==i)cout<<j<<' '; else cout<<1<<' ';} return 0; }
	}
	cout<<"NIE";
}
