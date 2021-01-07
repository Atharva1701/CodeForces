#include <bits/stdc++.h>
int main()
{
  int n;
  scanf("%d",&n);
  std :: cout << n / 2 << std :: endl;
  while(n > 3) {
    std :: cout << 2 << ' ';
    n -= 2;
  }
  std :: cout << n;
}
