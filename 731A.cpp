#include <bits/stdc++.h>
int main()
{
  std :: string s;
  std :: cin >> s;
  int rot = 0;
  s = 'a' + s;
  for(int i=1;i<s.size();i++){
    int d = abs(s[i] - s[i-1]);
    rot += std :: min(d, 26 - d);
  }
  std :: cout << rot;
}
