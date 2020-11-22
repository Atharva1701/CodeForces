#include <bits/stdc++.h>
int main()
{
  std :: string a,b,c;
  std :: cin >> a >> b >> c;
  a += b;
  sort(a.begin(),a.end());
  sort(c.begin(),c.end());
  if(a == c)
    printf("YES");
  else
    printf("NO");

}
