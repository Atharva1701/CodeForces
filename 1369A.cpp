#include <bits/stdc++.h>
int main()
{
  int poly;
  scanf("%d",&poly);

  while(poly--) {
    int n;
    scanf("%d",&n);
    if(n % 4 == 0)
      std :: cout << "YES" <<std :: endl;
    else
      std :: cout << "NO" << std :: endl;
  }
}
