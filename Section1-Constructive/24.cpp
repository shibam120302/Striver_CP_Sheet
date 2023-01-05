
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int digit=n%10;
        int res=0;
        res=(digit-1)*10;
        int num=digit;
        int i=1;
        while(num<=n){
            res+=(i++);
            num=num*10+digit;
        }
        cout<<res<<endl;
    }
    
    return 0;
}