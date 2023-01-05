
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   /*
       1 -> 11
       2 -> 22
       3 -> 33
       4 -> 44
       
       
       9-> 99
       10 -> 1 00 1
       11 -> 1 11 1
       12 -> 1 22 1
       19 -> 1 99 1
       20 -> 2 00 2
       21 -> 2 11 2
       
   
   */
   


string s;
cin>>s;
string res=s;
reverse(begin(s),end(s));
cout<<res+s;



    return 0;
}