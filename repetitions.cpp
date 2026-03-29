#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
int n = s.size();
int cur = 1;
int res = 1;
for(int i = 0 ; i<n ;i++)
{
if(s[i-1] != s[i]) cur = 0;
cur++;
res = max(res,cur);
}
cout << res << endl;
}

