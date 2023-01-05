
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
   rgular shot -> -1
   enchanced shot -> -3  ( multiple of 7)
   to kill all monster with enhc shot
   health of each monster should be 1
   the shot number should be multiple of 7
   
   3 2 4
   1 1 1 
   6 shots above output
   7th shot -> 0
   
   shots -> 1 2 3 4 5 6 7 8 9 10 11 12 13 14 
   health-> 1 1 1 1 1 1 3 1 1 1 1   1  1  3 
   
   total change in 1 cycle is 9
   9+9+9+ ... k times
   total change should be multiple of 9
   any number >=k
   
   
   
 
   
   */
   ll t,a,b,c;
   cin>>t;
   while(t--){
     cin>>a>>b>>c;
     ll sum=a+b+c;
     ll k=sum/9;
     if(sum%9==0 and a>=k and b>=k and c>=k)
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    
   }






    return 0;
}