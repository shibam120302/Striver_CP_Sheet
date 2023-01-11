https://codeforces.com/contest/5/problem/C

#include<cstdio>
#include<cstring>
#define N 1010000
char s[N];int n, t, m=1, a, c[N], l[N];
int main()
{ gets(s), n=strlen(s); for (int i=0; i<n; i++)  {if (s[i]=='(') c[++t]=i;
  else if (t)
  {
   l[i]=i-c[t]+1+l[c[t]-1], t--;
   if (a==l[i]) m++; else
   if (a<l[i]) a=l[i], m=1;
  }}
 printf("%d %d\n",a,m);
}
