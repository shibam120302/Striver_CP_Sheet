
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    _ _ _
    W1
    W2
    R W
    R R R 
    7 ans 
    
    n=4
    _ _ _ _
    3 2 1 0
    n-1  n-2 n-3 ... n-n
    1*(n-1) +RW 2*(n-2)  +  RRW 3*(n-3) ... (n-n)
    
    */
    
    int n;
    cin>>n;
    int sum=n;
    for(int i=1;i<n;i++) sum+=(n-i)*i;
    cout<<sum;

    return 0;
}