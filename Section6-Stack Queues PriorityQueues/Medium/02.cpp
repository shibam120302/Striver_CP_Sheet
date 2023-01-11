https://codeforces.com/contest/1092/problem/D1

#include <bits/stdc++.h>
using namespace std;
 
stack<int>st;
 
int main() {
int n,x;cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    if(!st.empty()&&abs(x-st.top())%2==0)
    st.pop();
    else st.push(x);
}if(st.size()<=1)cout<<"YES";
else cout <<"NO";
    return 0;
}
