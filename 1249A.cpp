#include <bits/stdc++.h>
void test_cases()
{
  int n,teams = 1;
  scanf("%d",&n);

  std :: vector<int> a(n);
  for(auto& it : a)
    std :: cin >> it;

  sort(a.begin(),a.end());

  for(int i=1;i<a.size();i++){
    if(a[i] - a[i-1] == 1){
      teams = 2;
      break;
    }
  }
  std :: cout << teams << std :: endl;
}
int main()
{
  int q;
  scanf("%d",&q);
  while(q--){
    test_cases();
  }
}
