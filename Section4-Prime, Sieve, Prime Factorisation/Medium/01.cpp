#include<iostream>
using namespace std;
int main()
{
int a[100005],i,j,n,b[100005]={0},c[100005]={0},p=0;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];
for(j=1;j*j<=a[i];j++)
{
if(a[i]%j==0)
{
c[i]=max(c[i],c[b[a[i]/j]]+1);
if(j>1) c[i]=max(c[i],c[b[j]]+1);
p=max(p,c[i]);
b[j]=b[a[i]/j]=i;
}
}
}
cout<<p;
}
