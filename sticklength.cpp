#include<bits/stdc++.h>
using namespace std;
void solve()
{
long long n;
cin >> n;
vector<long long> a(n);

for( long long  i =0 ; i < n; i++) 
{
cin >> a[i];
}
sort(a.begin(),a.end());
long long med = a[n/2];
long long cost = 0;
for(long long i = 0 ; i < n ; i++ )
{
cost += abs(a[i] - med);
}
cout << cost << endl;
}
int  main()
{

solve();

return 0;
}


