https://codeforces.com/problemset/problem/1594/B

#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,k,a,b,c;
	c=1000000007;
	cin>>t;
	while(t--){
		a=0;b=1;
		cin>>n>>k;
		while(k){
			a=(a+(k&1)*b)%c;
			k>>=1;
			b=(b*n)%c;
		}
		cout<<a<<endl;
	}
}
