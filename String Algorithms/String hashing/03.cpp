https://codeforces.com/contest/514/problem/C


#include<bits/stdc++.h> 
using namespace std;
int main(){
 int x,y,q=0;
 cin>>x>>y;
 string s[x],n;
 for(int i=0;i<x;i++){
  cin>>s[i];
 }
 for(int i=0;i<y;i++){
  cin>>n;
  int abla=0;
  for (int g=0;g<x;g++){
   q=0;
   if(s[g].size()==n.size()){
    for(int h=0;h<s[g].size();h++){
     if(n[h]!=s[g][h]){
      q++;
      if(q==2)
      break; 
     }
    }
    if(q==1)
    {
     abla=1;
     cout << "YES\n";
     break;
    } 
   }
  }
  if(!abla)
  cout<<"NO\n";
 }
}
