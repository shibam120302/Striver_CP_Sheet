
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int row=-n;row<=n;row++){
      // -3 -2 -1 0 1 2 -3
      // 6  4   2 0 2 4 6  ->spaces
      // 0  1  2  3 2 1 0  -> maximum
      int spaces=2*abs(row);
      for(int i=0;i<spaces;i++) cout<<" ";
      int max=n-abs(row);
      for(int i=0;i<max;i++) cout<<i<<" ";
      for(int i=max;i>0;i--) cout<<i<<" ";
      
      cout<<0<<endl;
  }
   return 0;
}