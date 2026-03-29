#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 1LL * n * (n + 1) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    long long target = sum / 2;

    vector<int> set1, set2;

    for (int i = n; i >= 1; i--)
    {
        if (target >= i)
        {
            set1.push_back(i);
            target -= i;
        }
        else
        {
            set2.push_back(i);
        }
    }

    // Print set1
    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";
    cout << endl;

    // Print set2
    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";
    cout << endl;

    return 0;
}
