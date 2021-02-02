#include <bits/stdc++.h>
void test_cases()
{
  int w,h,n;
  scanf("%d %d %d",&w,&h,&n);

  int sheets = 1;
  while(w % 2 == 0){
      sheets *= 2;
      w /= 2;
  }
  while(h % 2 == 0){
      sheets *= 2;
      h /= 2;
  }
  if(sheets >= n)
    std :: cout << "YES" << std :: endl;
  else
    std :: cout << "NO" << std :: endl;
}
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--){
    test_cases();
  }
}
