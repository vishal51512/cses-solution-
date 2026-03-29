#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long layer = max(x, y);
        long long base = layer * layer;

        long long ans;

        if (layer % 2 == 0) {
            if (x == layer)
                ans = base - (y - 1);
            else
                ans = (layer - 1)*(layer - 1) + x;
        } else {
            if (y == layer)
                ans = base - (x - 1);
            else
                ans = (layer - 1)*(layer - 1) + y;
        }

        cout << ans << endl;
    }

    return 0;
}
