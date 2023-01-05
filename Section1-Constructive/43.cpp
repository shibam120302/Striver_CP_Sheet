

#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*
   447 -> min
   744
   474
   
   num=4*m+7*n
   
   28=4*4*4*4*4*4*4
   28=7*7*7*7
   
   11 7 0
   res=44
   
   
   */
   
   int n;
   cin>>n;
   string s="";
   while(n>0&&n%7!=0) n-=4 , s.push_back('4');
   while(n>0&&n%7==0) n-=7 , s.push_back('7');
   if(n==0) cout<<s;
   else cout<<-1;
   
    return 0;
    

}