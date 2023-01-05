
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
     10  2
     2 2 2 2 2 -> 5 moves
     2 2 2 2 1 1 -> 6 moves
     2 2 2 1 1 1 1 -> 7 moves
     2 2 1 1 1 1 1 1 -> 8 moves
     2 1 1 1 1 1 1 1 1 -> 9 moves
     
     13    5
     2 2 2 2 2 2 1 -> 7 moves
     2 2 2 2 1 1 1 1 1 -> 9 moves
     2 2 2 1 1 1 1 1 1 1 -> 10 moves
    */
    int n,m;
    cin>>n>>m;
    int res=0;
    if(m>n){
        res=-1;
    }else{
        if(n%2)
            res=n/2+1;
        else
        res=n/2;
        while(res%m>0)
            res++;
    }
    
    cout<<res;

    return 0;
}