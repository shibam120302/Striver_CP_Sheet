
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
 a[i] -> fav drink
 total types of drink =k
 1 set= 2 portion
 1 peti = 2 bottles
 8 students = 4 sets = 4 peti
 9 students = 5 sets = 5 peti
 
 n= 5  k=3
  3  1 
 3 peti = 1 sets
 res=2+1+1=4
 
 n=10 k=3
 cap=5
 
 2 1 3 2 3 3 1 3 1 2
 
 1 1  2 2 3 3 3 3
 1 2

*/

int main() {
       int n,k,x;
       cin>>n>>k;
       vector<int>v(k+1);
       int cap=ceil(1.0*n/2);
       for(int i=0;i<n;i++){
           cin>>x;
           v[x]++;
       }
       int odd=0,even=0;
       for(int i=0;i<=k;i++){
           if(v[i]%2) even+=(v[i]-1),odd++;
           else even+=v[i];
       }
       int res=0;
       res+=2*min(even/2,cap);
       cap-=min(even/2,cap);
       res+=cap;
       cout<<res;
       
  return 0;
}