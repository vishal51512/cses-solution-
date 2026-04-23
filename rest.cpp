#include<bits/stdc++.h>
using namespace std;
void solve()
{
long long n;
cin >> n;
long long a , b;
vector<pair<long long,long long>> v;
for(long long i =0 ; i< n;i++)
{
cin >> a >> b;
v.push_back({a,1});
v.push_back({b,-1});
}
sort(v.begin(),v.end());
int cur = 0;
int ans = 0;
for(auto e : v)
{
cur += e.second;
ans = max(ans,cur);
}
cout << ans  << endl;
}

int main()
{

solve();
return 0;
}


