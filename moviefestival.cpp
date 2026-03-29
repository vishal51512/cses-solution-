#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
vector<pair<int,int>> movies;
for(int i = 0 ; i < t; i++)
{ int a ,b;
cin >> a >> b;
movies.emplace_back(b,a);
}
sort(movies.begin(),movies.end());

int count = 0;
int end = 0;
for(auto [b,a] : movies)
{
if( a >= end)
{
end = b;
count++;}
}
cout << count << endl;
}

