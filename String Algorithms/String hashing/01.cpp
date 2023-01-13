https://codeforces.com/problemset/problem/271/D

#include<bits/stdc++.h>
using namespace std;
char s[1520],v[35];
long long int k,c,a[3000009],ans;
main()
{
    cin>>s>>v>>k;
    for(int i=0;s[i];i++)
    {
        for(long long int j=i,kk=k,h=0;s[j] && (v[s[j]-'a']>'0' || kk--);j++)
        {
            a[c++]=h=(h*131)^s[j];
        }
    }
    sort(a,a+c);
     ans=unique(a,a+c)-a;
     cout<<ans<<endl;
     return 0;
}
