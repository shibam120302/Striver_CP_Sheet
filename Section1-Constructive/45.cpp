

#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*
  cf
  c -> b,d
  f ->e g
  
  adfa
  d-> c,e
  f->e,g
  
   */
   
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int i=0,j=n-1;
       while(i<=j){
           char x=s[i],y=s[j];
           char p1=(x=='a')?'1':x-1;
           char p2=(y=='a')?'1':y-1;
           char n1=(x=='z')?'2':x+1;
           char n2=(y=='z')?'2':y+1;
           if(p1==p2||p1==n2) i++,j--;
           else if(p2==n1||p2==p1) i++,j--;
           else break;
       }
        if(i>j) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
   }
   
  
    return 0;
    

}