
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
1-> 15           else 14
2->1+2+3+4+6=16  else 14
3->1+2+3+5+6=17  else 14
4->1+2+4+5+6=18  else 14
5->1+3+4+5+6=19  else 14
6->2+3+4+5+6=20  else 14

num = 14 * m + (15-20)
num = 14*(m+1) +( 1-6)
*/

int main() {
       ll t,x;
       cin>>t;
       while(t--){
           cin>>x;
           if(x>14 && x%14>=1&&x%14<=6) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
       
  return 0;
}