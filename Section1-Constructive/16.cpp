

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    /*
    Limak -> a   3a 
    Bob ->b      2b 
    a<=b
    
    */
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a<=b) a=3*a , b=2*b , cnt++;
    cout<<cnt;
    return 0;
}
