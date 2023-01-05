https://codeforces.com/contest/448/problem/D


#include <iostream>
using namespace std;
int main()
{
  long long n,m,k; 
  cin>>n>>m>>k;
long long l=0,r=n*m;
    while (l<r)
 {
      long long mid=(l+r)/2;
      long long ans=0;
            for (int i=1;i<=n;i++)
               ans+=min(m,mid/i);
                  if (ans<k) l=mid+1; 
                  else r=mid;
 }
  cout<<l;
return 0;
}
