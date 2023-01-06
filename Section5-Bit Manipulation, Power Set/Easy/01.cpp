https://codeforces.com/problemset/problem/912/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n,k;
	cin>>n>>k;
	if (k==1) cout<<n;
	else {
		ll x=1;
		while (x<=n) x<<=1;
		cout<<x-1;
	}
}
