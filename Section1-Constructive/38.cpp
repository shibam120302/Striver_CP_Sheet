
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* n=8
       
       1 2 3 4 5 6 7  pos
       1 2 1 2 1 2 1  a[i]
       
       7 6 5 4 3 2 1  max range
       
       
       1<=a[i]<n-i
    */
  
    
    int n,t;
    cin>>n>>t;
    
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    int pos=1,nxt;
    
    while(pos<t){
        nxt=pos+v[pos-1];
        pos=nxt;
    }
    
     if(pos==t) cout<<"YES";
     else cout<<"NO";


    return 0;
}