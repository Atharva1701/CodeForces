#include <bits/stdc++.h>
int main()
{
  int n,a,max,min,points = 0;
  scanf("%d %d",&n,&a);
  min = a;
  max = a;
  for(int i=1;i<n;i++) {
    scanf("%d",&a);
    if(a > max) {
      max = a;
      points++;
    }
    if(a < min) {
      min = a;
      points++;
    }
  }
  std::cout << points << '\n';
}
