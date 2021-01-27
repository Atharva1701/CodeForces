#include <bits/stdc++.h>
void test_cases()
{
  int n,count = 0;
  scanf("%d",&n);
  std :: vector<int> v(n);
  for(auto& it : v)
    std :: cin >> it;
  for(int i=0;i<v.size();i++){
    if(v[i] % 2 != 0){
      count++;
    }
  }
  if(count % 2 != 0){
    std :: cout << "YES\n";
    return;
  }
  if(count == v.size() || count == 0 || count == 1){
    std :: cout << "NO\n";
    return;
  }
  if(count != 0){
    std :: cout << "YES\n";
  }
}
int main()
{
  int tt;
  scanf("%d",&tt);

  while(tt--){
    test_cases();
  }
}
