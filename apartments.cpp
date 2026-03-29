#include<bits/stdc++.h>
using namespace std;
int main()
{
int  a , b, c;
cin >> a >> b >> c; 
vector<int> wish(a);
for(int i =0 ;i <a ;i++)
{
cin >> wish[i];
}
vector<int> size(b);
for(int i = 0; i  < b;i++)
{
cin >> size[i];
}
sort(wish.begin(),wish.end());
sort(size.begin(),size.end());
int count = 0;
int  j = 0;

for(int i = 0; i< a;i++)
{
while(j < b && size[j] < wish[i] - c) 
{ 
j++; }
if( j < b && size[j] <= wish[i] + c) {
count++;
 j++;
 }
}
cout << count << endl;
return 0;
}


