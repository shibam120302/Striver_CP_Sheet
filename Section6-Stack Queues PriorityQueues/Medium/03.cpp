https://codeforces.com/contest/1313/problem/C2

#include<bits/stdc++.h>
using namespace std;
const int N=500005;
long long i,n,m,s,a[N],l[N],r[N],z[N],t;
int main(){
	scanf("%lld",&n);
	for(i=1;i<=n;++i){
		scanf("%lld",&a[i]);
		while(a[z[t]]>a[i]&&t>0) --t;
		l[i]=l[z[t]]+a[i]*(i-z[t]);z[++t]=i;
	}
	for(i=n,t=0,z[0]=n+1;i>=1;--i){
		while(a[z[t]]>a[i]&&t>0) --t;
		r[i]=r[z[t]]+a[i]*(z[t]-i);z[++t]=i;
		if(l[i]+r[i]-a[i]>m)
			m=l[i]+r[i]-a[i],s=i;
	}
	for(i=s-1;i>=1;--i)
		a[i]=min(a[i],a[i+1]);
	for(i=1;i<=n;++i){
		if(i<=s) printf("%lld ",a[i]);
		else printf("%lld ",a[i]=min(a[i],a[i-1]));
	}
	return 0;
}
