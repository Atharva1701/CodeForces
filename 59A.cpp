#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;

  int i = 0,len = s.length(),count = 0,lower = 0;
  while(len)
  {
    if(isupper(s[i]))
      count++;
    i++;
    len--;
  }
  lower = s.length() - count;
  len = s.length(), i = 0;
  while(len)
  {
    if(count > lower)
      s[i] = toupper(s[i]);
    else if(count < lower)
      s[i] = tolower(s[i]);
    else if(count == lower)
      s[i] = tolower(s[i]);
    len--;
    i++;
  }
  cout << s;
}
