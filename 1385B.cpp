#include <bits/stdc++.h>
std :: vector<int> a;
std :: vector<int> getUnique(std :: vector<int> a)
{
  std :: vector<int> uniques;
  for(int i : a) {
    if (std::find(uniques.begin(), uniques.end(), i) == uniques.end())
      uniques.push_back(i);
  }
  return uniques;
}
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--) {
    int n;
    scanf("%d",&n);
    int no = n * 2;
    std :: vector<int> a(no);
    for(int &it :a)
      std :: cin >> it;
    std :: vector<int> uniques = getUnique(a);
    std :: vector<int>::iterator it;
    for(auto it=uniques.begin();it!=uniques.end();it++)
      std :: cout << *it << ' ';
    std :: cout << std :: endl;
  }
}
