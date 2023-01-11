https://codeforces.com/contest/359/problem/D

#include<cstdio>
int a[300008],w[300008],c,i,l,r,n,b;
int main(){
 scanf("%d",&n);
 for(;i<n;i++)scanf("%d",a+i);
 for(i=0;i<n;){
  r=l=i;while(l&&a[l-1]%a[i]==0)l--;
  while(r<n-1&&a[r+1]%a[i]==0)r++;
  i=r+1;r-=l;
  if(r>b)c=0,b=r;
  if(r==b)w[c++]=l+1;
 }
 printf("%d %d\n",c,b);
 for(i=0;i<c;printf("%d ",w[i++]));
}
