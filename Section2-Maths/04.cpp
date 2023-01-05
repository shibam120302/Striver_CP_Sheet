
    #include<bits/stdc++.h>


    using namespace std;

    int main() {
      int t, n, x;
      cin>>t;
      while (t--) {
        cin >> n >> x;
        if (n <= 2)
          cout << 1 << endl;
        else {
          n -= 2;
          int res = ceil(1.0*n/x) + 1;
          cout << res << endl;
        }

      }
      return 0;
    }