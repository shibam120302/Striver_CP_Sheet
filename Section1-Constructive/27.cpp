


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res=0;
    //last row
    for(int i=0;i<m;i++){
        if(v[n-1][i]=='D') res++;
    }
    // last col
    for(int i=0;i<n;i++){
        if(v[i][m-1]=='R') res++;
    }
    cout<<res<<endl;
    }
    return 0;
}