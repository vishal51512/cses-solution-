#include<iostream>
using namespace std;
int main()
{
long long n;
cin >> n;

long long expected_sum = n* (n+1) /2;
long long current_sum =0;
long long input = 0;
for(int i =0; i<n-1;i++)
{cin >> input;
current_sum +=input;
}
cout << expected_sum - current_sum << endl;
return 0;
}
 
