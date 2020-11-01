#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n,func = 0;
  scanf("%lld",&n);
  if(n % 2 == 0)
    printf("%lld",n / 2);
  else
    printf("%lld",-(n + 1) / 2);

}
