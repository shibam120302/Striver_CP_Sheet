#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int p[n+1]={-1},x=0;
    for(int i=0,j=-1;i<n;p[++i]=++j)while(~j&&s[i]!=s[j])j=p[j];
    for(int i=1;i<n;i++){
        if(p[i]==p[n]||p[i]==p[p[n]])x=max(x,p[i]);
    }
    cout<<(x?s.substr(0,x):"Just a legend");
}
