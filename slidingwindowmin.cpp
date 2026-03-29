#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ll n, k;
    cin >> n >> k;

    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    deque<pair<ll,ll>> dq; // {value, index}
    ll cur = x;
    ll ans  = 0;

    for (ll i = 0; i < n; i++) {
        // Remove bigger elements from back
        while (!dq.empty() && dq.back().first >= cur) {
            dq.pop_back();
        }

        dq.push_back({cur, i});

        // Remove out-of-window elements
        if (!dq.empty() && dq.front().second <= i - k) {
            dq.pop_front();
        }

        // Print min when window is ready
        if (i >= k - 1) {
           ans ^=dq.front().first;
        }

        // Generate next element
        cur = (a * cur + b) % c;
    }

    cout << ans << endl;
    return 0;
}

