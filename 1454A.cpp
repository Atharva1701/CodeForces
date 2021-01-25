#include <bits/stdc++.h>
void test_cases()
{
  int n;
  scanf("%d",&n);

  std :: vector<int> v;

  for(int i=2;i<=n;i++)
    v.push_back(i);
  v.push_back(1);
  for(int i=0;i<n;i++)
    std :: cout << v[i] << ' ';
  std :: cout << std :: endl;
}
int main()
{
  int tt;
  scanf("%d",&tt);

  while(tt--) {
    test_cases();
  }
}
