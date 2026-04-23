#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    long long x = 0; 

    for(int i = 0; i < n; i++)
    {
        if(a[i] > x + 1)
        {
            cout << x + 1 << endl;
            return;
        }
        x += a[i];
    }

    cout << x + 1 << endl;
}

int main()
{
    solve();
    return 0;
}
