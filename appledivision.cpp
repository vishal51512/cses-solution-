#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> p(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        total += p[i];
    }

    long long ans = LLONG_MAX;

    // iterate over all subsets
    for (int m = 0; m < (1 << n); m++) {
        long long subset_sum = 0;

        for (int i = 0; i < n; i++) {
            if (m & (1 << i)) {
                subset_sum += p[i];
            }
        }

        ans = min(ans, abs(total - 2 * subset_sum));
    }

    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
