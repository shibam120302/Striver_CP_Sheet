#include <bits/stdc++.h>

using namespace std;

int main()
{
  string n;
  cin>>n;
  int cnt=0;
  for(auto &c:n) if(c=='4' or c=='7') cnt++;
  if(cnt==4  or cnt==7) cout<<"YES";
  else cout<<"NO";
  
   return 0;
}