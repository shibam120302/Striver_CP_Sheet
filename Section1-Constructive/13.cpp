

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int cnt=0;
    int a,b;
    int res=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cnt-=a;
        cnt+=b;
        res=max(res,cnt);
    }
    cout<<res;
    return 0;
}
