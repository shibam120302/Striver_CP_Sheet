
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  long long res=v[n-1];
  for(int i=n-2;i>=0;i--){
      int t=min(v[i+1]-1,v[i]);
      if(t<0) t=0;
      v[i]=t;
      res+=t;
  }
  cout<<res;
   return 0;
}