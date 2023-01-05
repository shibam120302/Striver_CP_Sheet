https://codeforces.com/contest/1169/problem/C


#include <bits/stdc++.h>
using namespace std;
int n, m, a[300003];
 
int main() 
{
	int i, l=0, r;
	cin >> n >> m;
	for(i=0; i<n; ++i) cin >> a[i];
	for(r=m; l<r; ) 
	{
		int mid=(l+r)/2, last=0;
		for(i=0; i<n; ++i) 
		{
			if(a[i]<=last && a[i]+mid>=last || a[i]+mid-m>=last) continue;
			if(a[i]<last) break;
			last=a[i];
		}
		if(i==n) r=mid; 
		else l=mid+1;
	}
    cout << l;
	return 0;
}
