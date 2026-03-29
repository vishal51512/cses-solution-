#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<int> cnt(31, 0);   // bit frequency
    queue<ll> q;

    ll cur = x;
    ll windowOR = 0;
    ll ans = 0;

    for (ll i = 0; i < n; i++) {

        // add new number
        q.push(cur);
        for (int bit = 0; bit < 31; bit++) {
            if (cur & (1LL << bit)) {
                cnt[bit]++;
                windowOR |= (1LL << bit);
            }
        }

        // remove old number
        if ((ll)q.size() > k) {
            ll rem = q.front();
            q.pop();
            for (int bit = 0; bit < 31; bit++) {
                if (rem & (1LL << bit)) {
                    cnt[bit]--;
                    if (cnt[bit] == 0)
                        windowOR &= ~(1LL << bit);
                }
            }
        }

        // window ready
        if ((ll)q.size() == k) {
            ans |= windowOR;
        }

        // generate next
        cur = (a * cur + b) % c;
    }

    cout << ans << "\n";
    return 0;
}

