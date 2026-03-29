#include<bits/stdc++.h>
using namespace std;
int main()
{
long long  n ,x;
cin  >> n >> x;
vector<int> a(n);
for(int i =0; i< n;i++)
{
cin >> a[i];
}
int left = 0;
int right = 0;
int count = 0;
int sum = a[0];
while( left < n )
{
while( right + 1 < n && sum < x) 
{
right++ ;
sum += a[right];
}
if(sum == x)
{
count++;
}
sum -= a[left];
left++;
}
cout <<  count << endl;
}


