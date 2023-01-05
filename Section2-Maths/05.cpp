
#include<bits/stdc++.h>


using namespace std;

int main() {
  int t, n,x;
  cin>>t;
  while (t--) {
    cin >> n;
    int odd=0,even=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
        if(x%2) odd++;
        else even++;
    }
    if(sum%2) cout<<"YES"<<endl;
    else{
        if(odd>=1&&even>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
   

  }
  return 0;
}