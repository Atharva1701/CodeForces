#include <bits/stdc++.h>
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--) {
    int a[3],n;
    scanf("%d %d %d %d",&a[0], &a[1], &a[2], &n);
    std :: sort(a,a+3);
    n -= 2 * a[2] - a[1] - a[0];
    if(n < 0 || n % 3 != 0)
      std :: cout << "NO" << std :: endl;
    else
      std :: cout << "YES" << std :: endl;
  }
}
