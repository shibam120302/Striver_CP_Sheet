#include<iostream>
int n,k,i=-1,l=-1,p=1; 
char s[600000];
int main(){
 std::cin>>n>>k>>s;
 while(++l<n){
  if(s[l]>s[l%p])break;
  if(s[l]<s[l%p])p=l+1;
 }
 while(++i<k)putchar(s[i%p]);
}
