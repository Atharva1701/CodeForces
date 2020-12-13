#include <bits/stdc++.h>
int main()
{
  int test,a,b,point = 0;
  scanf("%d",&test);
  while(test) {
    scanf("%d %d",&a,&b);
    int d = abs(a - b) + 9;
    printf("%d\n",d / 10);
    test--;
  }

}
