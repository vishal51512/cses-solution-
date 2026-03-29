#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
vector<int> a(t+1);
for(int i = 1; i<=t;i++)
{
int x;
cin >> x;
a[x] = i;
}
int round = 1;
for(int i =2; i<=t;i++)
{ if (a[i] < a[i-1] ) round++;
}
cout << round  << endl;
}

