#include <bits/stdc++.h>
int main()
{
  int tt;
  scanf("%d",&tt);

  while( tt--) {
    int n,m;
    scanf("%d %d",&n,&m);

    if(n == 1) {
      std :: cout << 0;
      continue;
    }
    int answer = std :: min(2,n - 1) * m;
    std :: cout << answer << std :: endl;
  }
}
