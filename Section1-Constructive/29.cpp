
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
     Median of grp -> skill of grp
     minimize(median1-median2)
     6 5 4 1 2 3 
     1 2 3 4 5 6
     1  3 5
     2  4 6 
     
    */
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>skills(2*n);
        for(int i=0;i<2*n;i++)
        cin>>skills[i];
        sort(begin(skills),end(skills));
        int res=abs(skills[n]-skills[n-1]);
        cout<<res<<endl;
    }


    return 0;
}