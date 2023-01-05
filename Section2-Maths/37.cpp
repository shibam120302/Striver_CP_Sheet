
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
   every character shoud have even freq except one char
   ops are
    r g b w
   -1 -1 -1 +3
   
   5+3=8
   2+3=5
   even->odd
   odd-> even
   
   1 odd , 0 odd
   3 odds +1 even -> 3 evens + 1 odd
   4 odd -> 0 odd , if any of the digit is not equal to 0
   
   */
   ll t,r,g,b,w;
   cin>>t;
   while(t--){
       cin>>r>>g>>b>>w;
       ll odd=0;
       if(r%2) odd++;
       if(g%2) odd++;
       if(b%2) odd++;
       if(w%2) odd++;
       if(odd==2||(odd>=3&&(r==0||g==0||b==0))) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }

    return 0;
}