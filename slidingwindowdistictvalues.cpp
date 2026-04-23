#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    unordered_map<ll,ll> freq;

    // First window
    for(ll i = 0; i < k; i++)
        freq[a[i]]++;

    cout << freq.size() << " ";

    // Sliding window
    for(ll i = k; i < n; i++) 
    {
        // remove left element
        freq[a[i-k]]--;
        if(freq[a[i-k]] == 0) 
            freq.erase(a[i-k]);

        // add new element
        freq[a[i]]++;

        cout << freq.size() << " ";
    }

    cout << endl;
}

int main()
{
    solve();
    return 0;
}
