#include <bits/stdc++.h>

using namespace std;

int main()
{
   int f_give_gift[101];
   int f_recv_gift[101];
   int n;
   cin>>n;
   int pi;
   for(int i=1;i<=n;i++){
       cin>>pi;
       f_give_gift[i]=pi;
       f_recv_gift[pi]=i;
   }
   for(int i=1;i<=n;i++)
    cout<<f_recv_gift[i]<<" ";
   
   return 0;
}