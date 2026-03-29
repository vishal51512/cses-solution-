#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
ll n,k;
cin >> n >> k;
ll x , a, b,c;
cin >> x >> a >> b >> c;
deque<ll> window;
ll windowsum = 0;
ll answer = 0;
ll cur = x;
for(int i = 1; i <= n;i++)
{

window.push_back(cur);
windowsum += cur;
if((int) window.size() >k)
{
windowsum -= window.front();
window.pop_front();
}
if((int) window.size() == k)
{
answer ^= windowsum;
}
cur = (a*cur+b) % c;
}
cout << answer << endl;
}

