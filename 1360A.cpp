#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    int a,b;
    scanf("%d %d",&a,&b);
    int width = std :: max(2*b,a);
    int height = std :: max(2*a,b);
    std :: cout << pow(std :: min(width,height),2) << std :: endl;
  }
}
