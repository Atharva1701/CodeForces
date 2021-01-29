#include <bits/stdc++.h>
void test_cases()
{
  int h,m;
  scanf("%d %d",&h,&m);
  int hh = 24 - h;
  int mm = 60 - m;
  hh *= 60;
  hh -= 60;
  std :: cout << hh + mm << std :: endl;
}
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--){
    test_cases();
  }
}
