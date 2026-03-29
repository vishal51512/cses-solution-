#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    ll n, k;
    cin >> n >> k;

    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    queue<ll> window;
    ll windowXor = 0;
    ll ans = 0;

    ll cur = x;

    for (ll i = 0; i < n; i++) {
        window.push(cur);
        windowXor ^= cur;
        if ((ll)window.size() > k) {
            windowXor ^= window.front();
            window.pop();
        }

        if ((ll)window.size() == k) {
            ans ^= windowXor;
        }
        cur = (a * cur + b) % c;
    }

    cout << ans << "\n";
    return 0;
}

