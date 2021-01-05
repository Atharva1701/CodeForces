#include <bits/stdc++.h>
int main()
{
  int n,m = 0,c = 0;
  scanf("%d",&n);
  while(n--) {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > b)
      m++;
    if(a < b)
      c++;
  }
  if(m > c)
    std :: cout << "Mishka";
  if(m < c)
    std :: cout << "Chris";
  if(m == c)
    std :: cout << "Friendship is magic!^^";
}
