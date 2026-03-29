#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
vector<int> freq(26,0);
for( char c :s ) freq[ c - 'A']++;
int odd = 0;
int oddindex = -1;
for( int i = 0 ; i < 26;i++)
{
  if(freq[i] % 2 != 0 ) 
{
odd++;
oddindex = i;
}
}
if( odd > 1)
{
cout << "NO SOLUTION" << endl;
return 0;
}
string first = "", middle = "", second = "";
for(int i = 0; i < 26;i++)
{
string temp(freq[i]/2,char(i+'A'));
first += temp;
second = temp + second;
}
if(oddindex != -1)
{
middle = string(freq[oddindex]  , char(oddindex +'A'));
}
cout << first + middle+ second << endl;
return 0;
}

