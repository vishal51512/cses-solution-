#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
set<int> s;
for(int  i =0 ;i<t;i++)
{
int c;
cin >> c;
s.insert(c);
}
cout<< s.size() << endl;
return 0;
}

