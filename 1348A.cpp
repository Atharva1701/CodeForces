#include <bits/stdc++.h>
int main()
{
  int tt;
  scanf("%d",&tt);
  while (tt--) {
    int n;
    scanf("%d",&n);
    n = 2 << n / 2;
    std :: cout << n - 2 << std :: endl;
  }
}
