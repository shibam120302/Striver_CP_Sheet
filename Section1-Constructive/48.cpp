

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  /*
  10:00  -> 600mins
  11:00   -> 660 mins
  
  630 mins
  630/60 -> 10hrs
  630%60 -> 30mins
  
  */
   
   int n,k,b;
   vector<pair<int,int>>v;
   cin>>n>>k;
   for(int i=0;i<n;i++){
       cin>>b;
       v.push_back({b,i+1});
   }
   sort(begin(v),end(v));
   int days=0;
   int cnt=0;
   vector<int>res;
   for(int i=0;i<n;i++){
       days+=v[i].first;
       if(days<=k){
           cnt++;
           res.push_back(v[i].second);
       }else
            break;
   }
   
   
   cout<<cnt<<endl;
   for(auto x:res) cout<<x<<" ";
    return 0;
    

}