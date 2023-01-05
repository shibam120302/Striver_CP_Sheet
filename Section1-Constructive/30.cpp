
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>val;
        for(int i=1;i<=n;i++) val.push_back(i);
        vector<int>res;
        while(size(val)>1){
            int s=size(val);
            int sum=val[s-1]+val[s-2];
            res.push_back(val[s-1]);
            res.push_back(val[s-2]);
            val.pop_back();
            val.pop_back();
            if(sum%2==1) val.push_back(sum/2+1);
            else val.push_back(sum/2);
        }
        cout<<val.back()<<endl;
        for(int i=0;i<size(res);i+=2)
        cout<<res[i]<<" "<<res[i+1]<<endl;
    }


    return 0;
}