#include <bits/stdc++.h>
// long long lcm(int a, int b)
// {
//     return (a / std :: __gcd(a, b)) * b;
// }
void test_cases()
{
  int l,r;
  scanf("%d %d",&l,&r);

  if(2 * l > r)
    std :: cout << -1 << ' ' << -1 << std :: endl;
  else
    std :: cout << l << ' ' << 2 * l << std :: endl;

}
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--){
    test_cases();
  }
}
