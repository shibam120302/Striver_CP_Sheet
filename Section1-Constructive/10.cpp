#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int curr;
    for(int i=0;i<n;i++){
        cin>>curr;
        if(curr==1) {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}