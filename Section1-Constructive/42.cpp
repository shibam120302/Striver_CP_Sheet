

#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*
   10
   codeforces
   aaaaaa   acxxx  aaaa
   aaabbbcccddd
   */
   
   int n;
   string s;
   cin>>n>>s;
   for(int i=0;i<n-1;i++){
       if(s[i]!=s[i+1]){
           cout<<"YES"<<endl<<s[i]<<s[i+1];
           return 0;
       }
   }
    cout<<"NO";
    return 0;
    

}