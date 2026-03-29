#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

ll power_mod(ll n)
{
    ll ans = 1;
    for(ll i = 0; i < n; i++)
    {
        ans = (ans * 2) % mod;
    }
    return ans;
}

int main()
{
    ll n;
    cin >> n;
    cout << power_mod(n) << endl;
    
    }
    
