
#include<bits/stdc++.h>


using namespace std;

/*

*/

int main() {
   vector<int>v(4,0);
   for(int i=0;i<4;i++)
   cin>>v[i];
   sort(begin(v),end(v));
   cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2];

  return 0;
}