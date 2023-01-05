
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
     13 8 5
     
     5 8 13
     
     
     8 5 13
     5 13 8
     
      1 2 3 4 5 6 7 9 8
      
     
   
   */
   ll n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   sort(arr,arr+n);
   if(arr[n-2]+arr[n-3]<=arr[n-1]) cout<<"NO"<<endl;
   else{
       cout<<"YES"<<endl;
       cout<<arr[n-1]<<" ";
       for(int i=n-3;i>=0;i--) cout<<arr[i]<<" ";
       cout<<arr[n-2]<<endl;
   }
 
    return 0;
}