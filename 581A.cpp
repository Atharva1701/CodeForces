#include <bits/stdc++.h>
int main()
{
  int a,b,loop = 0,max = 0,day = 0;
  scanf("%d %d",&a,&b);

  if(a > b)
    loop = a;
  else
    loop = b;
  while(loop) {
    if(a > 0 && b > 0) {
      a--,b--;
      max++;
    }
    if(b == 0 && a % 2 == 0 && a > 0) {
      day++;
      a--;
    }
    if(b == 0 && a % 2 != 0 && a > 0) {
      day++;
      a--;
    }
    if(a == 0 && b % 2 == 0 && b > 0){
      day++;
      b--;
    }
    if(a == 0 && b % 2 != 0 && b > 0) {
      day++;
      b--;
    }
    loop--;
  }
  std :: cout << max << " " << day/2;
}
