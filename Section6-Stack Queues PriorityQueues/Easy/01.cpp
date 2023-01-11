https://codeforces.com/contest/343/problem/B

#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
{
int n=0;char ch;
while(scanf("%c",&ch),ch!='\n')
if(n&&ch==arr[n-1])--n;
else arr[n++]=ch;
puts(n?"No":"Yes");
}
