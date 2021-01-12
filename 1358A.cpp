#include <bits/stdc++.h>
int main()
{
  int tt;
  scanf("%d",&tt);

  while(tt--) {
    long n,m;
    scanf("%ld %ld",&n,&m);

    long double div = (long double)(n * m) / 2;
    std :: cout.precision(0);
    std :: cout << std :: fixed << ceil(div) << std :: endl;
  }
}
