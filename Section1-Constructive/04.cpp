
#include <bits/stdc++.h>

using namespace std;

int main()
{
  /* n friends
     k bottles
     cap- l ml
     total_limes=c*d  -> d hisse , c lemons
     p salt
     
                 1 2 3 4 5 6 7 .....n
      drinks    nl nl nl nl nl ....  ( 1 toast) n* (nl)
      lime      1   1  1  1  1  ....  (cd)
      salt      np  np np np np ...
      
      drinks -> n *(nl) * x= k*l
      lime   -> n * x =cd
      salt  ->  n * (np) * x= p
  
  */
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int tl=c*d;
  int td=k*l;
  int x=td/(n*nl);
  int y=tl/n;
  int z=p/(n*np);
  int res=min(x,min(y,z));
  cout<<res;
  return 0;
}