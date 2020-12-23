#include <bits/stdc++.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i = 0,add = 0,burle = 0;
  std::vector<int> a(n);
  for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
  }
  i=0;
  int max = *max_element(a.begin(),a.end());
  while(n) {
    add = max - a[i];
    burle += add;
    i++,n--;
  }
  std :: cout << burle;
}
