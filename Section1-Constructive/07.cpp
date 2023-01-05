#include <bits/stdc++.h>

using namespace std;

int main()
{
    //n * m matrix
    int n,m;
    cin>>n>>m;
    string s1(m,'#');
    string s2(m,'.');
    int dir=0;
    for(int r=0;r<n;r++){
        if(r%2==0) cout<<s1<<endl;
        else{
            if(dir==0) s2[0]='.', s2[m-1]='#';
            else s2[0]='#' , s2[m-1]='.';
            cout<<s2<<endl;
            dir=1-dir;
        }
    }
    

    return 0;
}