https://codeforces.com/contest/1073/problem/C

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
char s[N];
int sumx[N], sumy[N];
int main()
{
	int n, x, y;
	cin >> n >> s + 1 >> x >> y;
	for (int i = 1; i <= n; i++)
	{
		sumx[i] = sumx[i - 1];
		sumy[i] = sumy[i - 1];
		if (s[i] == 'U')
			sumy[i]++;
		else if (s[i] == 'D')
			sumy[i]--;
		else if (s[i] == 'L')
			sumx[i]--;
		else
			sumx[i]++;
	}
	if (n < abs(x) + abs(y) || (abs(x) + abs(y) + n) % 2)
	{
		cout << -1 << endl;
		return 0;
	}
  
	int l = 0, r = n;
	 while (l < r)
	{
		int m = l + r >> 1;
		bool flag = 0;
		for (int i = 1; i + m - 1 <= n; i++)
		{
			int rx = sumx[n] - (sumx[i + m - 1] - sumx[i - 1]);
			int ry = sumy[n] - (sumy[i + m - 1] - sumy[i - 1]);
			int cg = abs(x - rx) + abs(y - ry);
			if (cg <= m && (m - cg) % 2 == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			r = m;
		else
			l = m + 1;
	}
	cout << l << endl;
	return 0;
}
