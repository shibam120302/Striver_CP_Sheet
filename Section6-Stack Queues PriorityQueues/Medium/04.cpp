https://codeforces.com/contest/1515/problem/C

#include<bits/stdc++.h>
using namespace std;
int N,M,x; int a[10010];
int T;
 int main() {
 cin>>T;
 for(;T;T--) {
  cin>>N>>M>>x;set<pair<int,int> >q;
  cout<<"YES"<<endl;
  for(int i=0;i<M;i++) q.insert({0,i+1});
  for(int i=0;i<N;i++) {
   int a;cin>>a;
   pair<int,int>t=*q.begin();q.erase(t); cout<<t.second<<' ';
      q.insert({t.first+a,t.second});
  }
  cout<<endl;
 }
}
