#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
int n ;
ll t;
cin >> n  >> t;
vector<int>  a(n);
for(int i = 0 ; i < n;i++)
{
 cin >> a[i];
 }
ll low =1;
ll high = *min_element(a.begin(),a.end()) *t ;
ll ans = high ;
while ( low <= high)
{
ll mid = (low+high)/2;
ll products = 0;
for(ll x : a)
{
products += mid /x;
if(products >=t) break;
}
if(products >=t )
{
ans = mid;
high = mid -1;
}
else
{
low = mid +1;
}
}
cout << ans << endl;
}

 

