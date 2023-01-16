https://codeforces.com/contest/1080/problem/E

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
typedef long long LL;
const LL MOD = 1e9+7;
const int N = 510;
 
char s[N][N]; 
int pw[N],h[N],ans,w[N],cnt[N][2],r[N],t[N][26],n,m;
 
int manacher(){
	int now=MOD,res=0;
	rep(i,1,n) w[i<<1] = (cnt[i][1]<=1) ? h[i] : ++now;
	rep(i,0,n) w[i<<1|1]=-1;
	w[0]=-2;w[n+1<<1]=-3;
	int mx=0, p=0;
	rep(i,2,n<<1){
		r[i] = max(min(mx-i,p*2-i>0?r[2*p-i]:0),1);
		while(w[i-r[i]]==w[i+r[i]])++r[i];
		if(i+r[i]>mx)mx=(p=i)+r[i];
	}
	rep(i,2,n<<1) if(w[i]<MOD) res+=r[i]/2;
	return res;
}
 
int main(){
	scanf("%d%d",&n,&m);
	rep(i,1,n)scanf("%s",s[i]+1);
	pw[0]=1;rep(i,1,25)pw[i]=2333ll*pw[i-1]%MOD;
	rep(l,1,m){
		memset(t,0,sizeof t);
		rep(i,1,n) cnt[i][0]=cnt[i][1]=h[i]=0;
		rep(r,l,m){
			rep(i,1,n){
				char ch = s[i][r]-'a';
				cnt[i][t[i][ch]&1]--;
				t[i][ch]++; h[i] = (h[i]+pw[ch])%MOD;
				cnt[i][t[i][ch]&1]++;
			}
			ans += manacher();
		}
	}
	cout<<ans<<endl;
	return 0;
}
