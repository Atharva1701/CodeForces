#include <bits/stdc++.h>
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--) {
    std :: string x;
    std :: cin >> x;
    int dig = x[0] - '0' - 1;
    int len = x.size();
    std :: cout << dig * 10 + len * (len + 1) / 2 << std :: endl;
  }
}
