

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(auto c:s) v[c-'a']++;
    int cnt=0;
    for(auto c:v) if(c!=0) cnt++;
    if(cnt%2){ //odd
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
}
