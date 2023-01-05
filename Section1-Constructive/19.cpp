

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[3]={0,0,0};
    for(auto c:s){
        if(c=='1') arr[0]++;
        else if(c=='2') arr[1]++;
        else if(c=='3') arr[2]++;
    }
    string res="";
    for(int i=0;i<3;i++){
        while(arr[i]--){
            res.push_back('+');
            res.push_back(i+1+'0');
        }
    }
    res=res.substr(1);
    cout<<res;
}
