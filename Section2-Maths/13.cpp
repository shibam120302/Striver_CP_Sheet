
#include<bits/stdc++.h>


using namespace std;

/*
 n 
 k 1 to n
 k mod x= y
 _  mod x = y
 
 x y n
 7 5 12345
 n mod x -> res
 12345%7 -> 4
 12344%7 -> 3
 12343%7 -> 2
 12342%7 -> 1
 12341%7 -> 0
 12340%7 -> 6
 12339%7 -> 5
 
 start-final
 4-5 = -1 + 7 = 6
 
 2 
 2+7 %7 =2
*/

int main() {
  long long t,n,x,y;
  cin>>t;
  while(t--){
   cin>>x>>y>>n;
   int rem=n%x;
   int change=(rem-y+x)%x;
   n-=change;
   cout<<n<<endl;
  }
  

  
  return 0;
}