

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    bool allUpper=true;
    //hELLO
    //HTTP
    //z -> Z
    for(int i=1;i<size(s);i++) allUpper=allUpper&&isupper(s[i]);
    
    if(allUpper||size(s)==1){
        for(int i=1;i<size(s);i++) s[i]=tolower(s[i]);
        if(isupper(s[0])) s[0]=tolower(s[0]);
        else s[0]=toupper(s[0]);
    }
    cout<<s;
    return 0;
}