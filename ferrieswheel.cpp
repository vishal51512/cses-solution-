#include<bits/stdc++.h>
using namespace std;
int main()
{ int n ,x;
cin >> n >> x;
vector<int> w(n);
for(int i = 0;i < n;i++)
{
cin >> w[i];
}
sort(w.begin(),w.end());
int count = 0;
int i = 0;
int j = n-1;
while(i <= j)
{
if( i < j && w[i]+w[j] <= x)
{
count++;
i++;
j--;
}
else
{
count++;
j--;
}
}
cout<< count << endl;
}

