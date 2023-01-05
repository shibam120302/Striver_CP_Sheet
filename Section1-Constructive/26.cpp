


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res="";
    int len=1;
    int i=0;
    while(i<n){
        res.push_back(s[i]);
        i+=(len++);
    }
    cout<<res;
   

    return 0;
}