
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int X=0;
  string s;
  while(n--){
      cin>>s;
    //   "++X , --X , X++ , X--"
      if(s=="++X"||s=="X++") X++;
      else X--;
  }
  cout<<X--;
  
}