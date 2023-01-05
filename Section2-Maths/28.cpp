
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
        div by 60
        60= 2 * 3 *10
        10 -> last 0
        2 -> last digit should be even
        3 -> sum of digits should be div by 3
        27 = 2+7 =9
        
        3300/60 -> 55
        
*/

int main() {
       ll n,x;
       string s;
       cin>>n;
       while(n--){
           cin>>s;
           bool zero=false;
           ll sum=0,even=0;
           for(ll i=0;i<s.size();i++){
               x=s[i]-'0';
               if(x==0) zero=true;
               if(x%2==0) even++;
               sum+=x;
           }
           
           if(sum%3==0 and even>1 and zero) cout<<"red"<<endl;
           else cout<<"cyan"<<endl;
       }
       
  return 0;
}