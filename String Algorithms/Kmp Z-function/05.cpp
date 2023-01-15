https://codeforces.com/contest/1138/problem/D

#include<cstdio>
#include<cstring>
const int N=5e5+5;
char c[N],s[N];
int p[N];
int main(){
int n,m,a=0,q;
scanf("%s%s",c+1,s+1);
n=strlen(c+1),m=strlen(s+1);
for(int i=1;i<=n;++i)a+=c[i]-48;
q=n-a;
for(int i=2,j=0;i<=m;++i){
for(;j&&s[i]!=s[j+1];j=p[j]);
if(s[i]==s[j+1])++j;p[i]=j;
}
for(int i=1,j=1;i<=n;++i,++j){
if(!a){putchar(48);continue;}
if(!q){putchar(49);continue;}
putchar(s[j]);
if(s[j]==48)--q;
else --a;
if(j==m)j=p[m];
}
return 0;
}
