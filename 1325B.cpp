#include <bits/stdc++.h>
void test_cases()
{
  int n;
  scanf("%d",&n);
  std :: vector<int> v(n);
  for(auto& it : v)
    std :: cin >> it;
  std :: set<int> s;
  for(int i=0;i<v.size();i++)
    s.insert(v[i]);
  int sub = s.size();
  std :: cout << sub << std :: endl;
}
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--){
    test_cases();
  }
}
