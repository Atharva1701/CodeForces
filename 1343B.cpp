#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t) {
    int n;
    scanf("%d",&n);
    n = n / 2;
    if(n % 2 == 0) {
      printf("YES\n");
      int i;
      for(i=1;i<=n;++i)
        printf("%d ",i * 2);
      for(i=1;i<2*n - 1;i+=2)
        printf("%d ",i);
      printf("%d\n",i + n);
    }
    else
      printf("NO\n");
    t--;
  }
}
