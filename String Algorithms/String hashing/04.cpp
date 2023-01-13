https://codeforces.com/contest/7/problem/D

#include <bits/stdc++.h>
const int N=6e6,M=107;
int a[5000005],l,r,t,i,p=1;
char s[5000005];
int main(){
	for(gets(s);s[i];i++)l=l*M+s[i],r+=s[i]*p,p*=M,a[i+1]=(l==r)?a[(i+1)/2]+1:0,t+=a[i+1];
	printf("%d\n",t);
}
