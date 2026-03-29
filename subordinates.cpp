#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> tree;
vector<int> sub;
int dfs( int u)
{
int size = 1;
for(auto v : tree[u])
{
size += dfs(v);
}
sub[u] = size -1;
return size;
}

int main()
{ int n;
 cin >> n;
  tree.assign(n+1,{});
  sub.assign(n+1,0);
  for(int i =2 ;i<=n;i++)
  { int boss;
  cin >> boss;
   tree[boss].push_back(i);
   }
   dfs(1);
   for(int i = 1; i<= n;i++)
 
   { cout << sub[i] <<  endl;
   }
cout << endl;
}

   
   

