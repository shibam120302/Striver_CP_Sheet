https://codeforces.com/contest/471/problem/D

#include <bits/stdc++.h>
using namespace std;
const int maxn = 4e5 + 20;
int f[maxn], a, b, s[maxn], l, ans;
int main() {
	cin >> a >> b >> l;
	for (int i = 1, x; i < a; i++) {
		cin >> x;
		s[i + b] = x - l;
		l = x;
	}
	cin >> l;
	for (int i = 1, x; i < b; i++) {
		cin >> x;
		s[i - 1] = x - l;
		l = x;
	}
	s[b - 1] = 100000009;
	int k = 0;
	for (int i = 1; i < a + b; i++) {
		while (k > 0 && s[i] != s[k])
			k = f[k - 1];
		k += (s[i] == s[k]);
		f[i] = k;
		if (f[i] == b - 1 && i - b + 1 > b - 1)
			ans++;
	}
	cout << ans << endl;
}
