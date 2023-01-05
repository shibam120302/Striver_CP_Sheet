
#include <bits/stdc++.h>

using namespace std;

int main()
{
  // invert num to min + integer
  // 9234
  string n;
  cin>>n;
  for(int i=0;i<size(n);i++){
      char c=n[i];
      if(i==0 and c>='5' and c<'9') n[i]='9'-c+'0';
      else if(i>0 and c>='5' ) n[i]='9'-c+'0';
  }
   cout<<n;
   return 0;
}