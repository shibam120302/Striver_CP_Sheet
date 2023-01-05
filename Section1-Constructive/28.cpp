
#include <bits/stdc++.h>

using namespace std;

bool vowel(char c){
    string s="AEIOUYaeiouy";
    for(auto ch:s) if(ch==c) return true;
    return false;
}
int main()
{
    string s,res="";
    cin>>s;
    for(auto c:s){
        if(!vowel(c)){
            res.push_back('.');
            if(c>='A'&&c<='Z') {
                int i=(c-'A');
                res.push_back('a'+i);
            }
            else res.push_back(c);
        }
    }
    cout<<res;
    return 0;
}