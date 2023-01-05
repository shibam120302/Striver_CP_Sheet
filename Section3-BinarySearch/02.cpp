
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
   1 2 3 4 5 6 
   a1 a2 a3 a4 a5
   b1 b2 b3 b4 b5
   
   k gm of magic ingredient , 
   
   */
   ll n,k;
   cin>>n>>k;
   vector<int>req(n),have(n);
   for(int i=0;i<n;i++) cin>>req[i];
   for(int i=0;i<n;i++) cin>>have[i];
   
   ll low=0, high=2001;
   while(low<=high){
       ll mid=low+(high-low)/2;
       ll z=0,cost=0;
       for(int i=0;i<n;i++)
       cost+=max(req[i]*mid-have[i],z);
       if(cost<=k) low=mid+1;
       else high=mid-1;
   }
   
   /*
    low=ans+1
    ans+1 .... high
    high low
   */
   cout<<high;
   
   
   
   
   
   
   
   
   
   

    return 0;
}