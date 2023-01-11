https://codeforces.com/contest/158/problem/C


#include<bits/stdc++.h>
using namespace std;
int n;
string s,t,p;
 
main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t=="pwd"){cout<<s<<"/"<<endl;}
		else{
			cin>>p;
			if(p[0]=='/')s=p;
			else{s+="/";s+=p;}
			int x=0;
		    for(int j=0;j<s.size();j++){
		    	if(s[j]=='/'&&s[j+1]!='.')x=j;
		    	else if(s[j]=='.'&&s[j+1]=='.'){s.erase(x,j+2-x);x=0;j=0;}
			}
		}
	}
}
