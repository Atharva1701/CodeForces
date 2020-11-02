#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a,b,answer;
  cin >> a >> b;
  int len = a.length(),i = 0;
  while(len)
  {
    if(a[i] == '0' && b[i] == '0')
      answer += a[i];
    else if(a[i] == '0' && b[i] == '1')
    {
      a[i] = '1';
      answer += a[i];
    }
    else if(a[i] == '1' && b[i] == '0')
    {
      a[i] = '1';
      answer += a[i];
    }
    else if(a[i] == '1' && b[i] == '1')
    {
      a[i] = '0';
      answer += a[i];
    }
    len--;
    i++;
  }
  cout << answer;

}
