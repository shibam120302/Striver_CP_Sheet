https://codeforces.com/problemset/problem/1095/C

#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int n,k;
	cin>>n>>k;
	int a[k],sum=k;
	fill(a,a+k,1);
	for(int i=k-1;i>=0;i--)
	{
		while(sum+a[i]<=n)
		{
			sum+=a[i];
			a[i]*=2;
		}
	}
	if(sum!=n) 
		cout<<"NO";
	else
	{
		cout<<"YES"<<'\n';
		for(int i=0;i<k;i++)
		cout<<a[i]<<" ";
	}
}
