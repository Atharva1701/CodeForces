#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,anton = 0,danik = 0;
  cin >> n;
  string s;
  cin >> s;
  int len = s.length(),i = 0;

  while(len)
  {
    if(s[i] == 'A')
      anton++;
    else if(s[i] == 'D')
      danik++;
    len--;
    i++;
  }
  if(anton > danik)
    cout << "Anton";
  else if(danik > anton)
    cout << "Danik";
  else if( anton == danik)
    cout << "Friendship";
}
