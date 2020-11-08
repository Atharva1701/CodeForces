#include <bits/stdc++.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  std::vector<int> v{a,b,c,d};
  std::vector<int>:: iterator ip;
  sort(v.begin(),v.end());
  ip = std::unique(v.begin(),v.begin() + 4);
  v.resize(std::distance(v.begin(), ip));
  printf("%d",4 - v.size());
}
