
#include<bits/stdc++.h>

#define ll long long
using namespace std;

/*
            1   1
            2   2
            3   3
            4   4
            5   5
            6   6
            7   7
            8   8
            9   9
            
            10  1
            11  2
            12  3 
            13  4
            14  5
            15  6
            16  7
            17  8
            18  9
            
            19  1
            20  2
            21  3
            22  4
            23  5
            24  6
            25  7
            26  8
            27  9
            
            28  1
*/

int main() {
       ll t,k,x;
       cin>>t;
       while(t--){
           cin>>k>>x;
           ll res=9*(k-1)+x;
           cout<<res<<endl;
       }
       
  return 0;
}