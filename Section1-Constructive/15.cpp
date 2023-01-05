

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int k,n,w;
    cin>>k>>n>>w;
    int total_cost=0;
    for(int i=1;i<=w;i++)
    total_cost+=(i*k);
   
    int res=total_cost-n;
    if(res<0) cout<<"0";
    else cout<<res;
    return 0;
}
