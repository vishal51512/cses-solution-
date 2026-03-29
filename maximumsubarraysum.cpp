#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
 int t;
 cin >> t;
 ll sum = -1e9;
 ll best = -1e9;
 for( int  i = 0; i<t;i++)
 {
   ll x;
   cin >> x;
   sum = max(sum+x,x);
   best = max(best,sum);
   }
cout << best << endl;
}

 
