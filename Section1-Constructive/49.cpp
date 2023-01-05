

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  /*
 7
-7 -29 0 3 24 -29 38
-6 -30 0 4 24 -28 38
-4 -15 0 2 12 -14 19
  
  */
   
   int n;
   cin>>n;
   vector<int>v(n);
   int odd=0;
   for(int i=0;i<n;i++){
       cin>>v[i];
       if(v[i]%2) odd++;
   }
   odd=odd/2;
   for(auto x:v){
       if(x%2){
           if(odd>0) odd--,x--;
           else x++;
       }
       cout<<x/2<<endl;
   }
   return 0;

}