https://codeforces.com/problemset/problem/1494/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,u,r,l,d;
        cin>>n>>u>>r>>d>>l;
        if(((u==n &&d==n)&&(l<2||r<2))||((l==n && r==n)&&(u<2||d<2))||((u==n||d==n) &&(l==0||r==0))||((l==n||r==n) &&(u==0||d==0))||((max(0,u-n+2)+max(0,d-n+2))>(l+r))||((max(0,l-n+2)+max(0,r-n+2))>(u+d)))
       {
             cout<<"NO\n";
        }
        else
        cout<<"YES\n";
    }
    return 0;
}
