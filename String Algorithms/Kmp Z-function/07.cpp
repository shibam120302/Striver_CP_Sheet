https://codeforces.com/contest/432/problem/D

#include<cstdio>
#include<cstring>
const int N=1e5+7;
char s[N];int fail[N];
void gfail(char*s)
{
	for(int i=0,j=*fail=-1;s[i];)
		if(j==-1||s[i]==s[j])fail[++i]=++j;
		else j=fail[j];
}
int T[N],ans[N],tp=0;
int main()
{
	scanf("%s",s+1);gfail(s+1);
	int n=strlen(s+1);
	for(int i=n;i;--i)++ans[i],ans[fail[i]]+=ans[i];
	for(int i=n;i;i=fail[i])T[++tp]=i;
	printf("%d\n",tp);
	for(int i=tp;i;--i)
		printf("%d %d\n",T[i],ans[T[i]]);
	return 0;
}
