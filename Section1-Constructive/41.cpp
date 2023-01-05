

#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*
    i 1 to n
    a[i]  rain value
       d-x .....   d-2 d-1 d d+1 d+2 d+3 ... d+y
       BIGGER            small      BIGGER
   
   */
   int n,x,y;
   cin>>n>>x>>y;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   for(int i=0;i<n;i++){
       bool flag=false;
       //left
       for(int j=i-1;j>=i-x&&j>=0&&!flag;j--)
       if(arr[j]<=arr[i]) flag=true;
       
       if(flag) continue;
       
       // right
       for(int j=i+1;j<n&&j<=i+y&&!flag;j++)
       if(arr[j]<=arr[i]) flag=true;
       
       if(!flag){
           cout<<i+1;
           return 0;
       }
       
   }
  
    return 0;
    
    
    
    
    
    
    
    
    
}