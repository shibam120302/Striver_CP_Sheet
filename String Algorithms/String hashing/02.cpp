https://codeforces.com/contest/1326/problem/D2

#include<bits/stdc++.h>
using namespace std;
int f[2000001],t;
string s,c,a,b;
string kmp(string s)
{
	string c=s;
	reverse(c.begin(),c.end());
	c=s+'$'+c;
	int j=0,n=c.size();
	for(int i=1;i<n;i++)
	{
		while(j&&c[i]!=c[j])
		j=f[j-1];
		if(c[i]==c[j])
		j++;
		f[i]=j;
	}
	return s.substr(0,j);
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		cin>>s;
		int l=0,r=s.size()-1;
		while(l<r&&s[l]==s[r])
		{
			l++;
			r--;
		}
		c=s.substr(l,r-l+1);
		a=kmp(c);
		reverse(c.begin(),c.end());
		b=kmp(c);
		if(a.size()<b.size())
		swap(a,b);
		cout<<s.substr(0,l)<<a<<s.substr(r+1)<<endl;
	}
}
