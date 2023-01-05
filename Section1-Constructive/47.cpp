

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  /*
  10:00  -> 600mins
  11:00   -> 660 mins
  
  630 mins
  630/60 -> 10hrs
  630%60 -> 30mins
  
  */
   
    int h1,m1,h2,m2;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    int min1=h1*60+m1;
    int min2=h2*60+m2;
    int mid=(min1+min2)/2;
    int hrs=mid/60;
    int mins=mid%60;
    if(hrs>9&&mins>9)
    cout<<hrs<<":"<<mins<<endl;
    else{
        if(hrs<10) cout<<0;
        cout<<hrs<<":";
        if(mins<10) cout<<0;
        cout<<mins<<endl;
    }
    return 0;
    

}