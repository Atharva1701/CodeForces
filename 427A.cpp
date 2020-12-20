#include <bits/stdc++.h>
int main()
{
  int t,c,solved = 0,sum = 0;
  scanf("%d",&t);
  while(t) {
    scanf("%d",&c);
    if(c < 0) {
      if(!(sum >=1)) {
        solved++;
      }
      else
        sum--;
    }
    else
      sum += c;
    t--;
  }
  std :: cout << solved;
}
