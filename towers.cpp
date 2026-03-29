#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
multiset<int> towers;
for(int i  = 0;i < t ;i++)
{
int x;
cin >> x;
auto it = towers.upper_bound(x);
if(it  == towers.end()) towers.insert(x);
else
{
towers.erase(it);
towers.insert(x);
}
}
cout << towers.size() << endl;
}

