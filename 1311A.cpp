#include <bits/stdc++.h>
int main()
{
  int tt;
  scanf("%d",&tt);

  while(tt--) {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == b)
      std :: cout << 0 << std :: endl;
    else{
      if((a < b && (b - a) % 2 != 0) || (a > b && (a - b) % 2 == 0))
        std :: cout << 1 << std :: endl;

      else
        std :: cout << 2 << std :: endl;
    }
  }
}
