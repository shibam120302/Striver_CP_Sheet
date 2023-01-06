https://codeforces.com/problemset/problem/1097/B

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[20],s;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int j=0;j<(1<<n);j++){
		s=0;
		for(int i=0;i<n;i++){
			j&(1<<i)?s+=a[i]:s-=a[i];
		}
		if(s%360==0){
			cout<<"YES";return 0;
		}
	}
	cout<<"NO";
}
 
 
