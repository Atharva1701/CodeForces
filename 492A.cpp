#include <bits/stdc++.h>
int main()
{
  int n,level = 0,height = 0;
  scanf("%d",&n);

  while(level <= n) {
    height++;
    level += (height * (height + 1)) / 2;
  }
  std :: cout << height - 1;
}
