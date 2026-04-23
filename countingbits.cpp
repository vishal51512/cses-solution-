#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int solve()
{

    ll n;
    cin >> n;

    ll total = 0;

    for (int i = 0; i < 60; i++) {
        ll cycle = 1LL << (i + 1);
        ll full_cycles = (n + 1) / cycle;
        ll remainder = (n + 1) % cycle;

        total += full_cycles * (1LL << i);
        total += max(0LL, remainder - (1LL << i));
    }

    cout << total << endl;


}
int main()
{
solve();
return 0;
}


