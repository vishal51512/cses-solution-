#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{ ll n;
cin >> n;
ll longest =0;
ll total = 0;
for(int  i = 1 ; i <= n;i++)
{
 ll x;
 cin >> x;
 total += x;
 longest = max(longest,x);
 }
cout << max( total , 2*longest) << endl;
}

