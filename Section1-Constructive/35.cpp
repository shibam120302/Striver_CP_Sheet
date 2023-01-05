
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
    int res=0;
  for(int i=0;i<n;i++){
      res+=(n-i-1);
      res+=(n-i-1);
  }
 cout<<res+1;
   return 0;
}