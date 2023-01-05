
#include<bits/stdc++.h>


using namespace std;

/*
    val 3 2 7 6
    pos 0 1 2 3
pos%2   0 1 0 1
val%2   1 0 1 0
2 swaps needed

  val 3 2 6
  pos 0 1 2
 p%2  0 1 0
val%2 1 0 0
1 swap needed

even , odd
 pos 0 1 2 3 4 5 6 7 
 mod 0 1 0 1 0 1 0 1
 val
 mod 

*/

int main() {
  long long t,n,x;
  cin>>t;
  while(t--){
   cin>>n;
   int odd=0,even=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2!=i%2){
           if(x%2) odd++;
           else even++;
        }
    }
    if(odd==even) cout<<odd<<endl;
    else cout<<-1<<endl;
  }
  

  
  return 0;
}