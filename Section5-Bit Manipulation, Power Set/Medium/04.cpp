https://codeforces.com/problemset/problem/1225/C

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,p;
    cin>>n>>p;
    for(int bc=1;bc<=40;bc++) {
        n-=p;
        if(n>=0&&__builtin_popcount(n)<=bc && bc<=n) {
            cout<<bc<<'\n';
            return 0;
        }
    }
    cout<<-1;
}
