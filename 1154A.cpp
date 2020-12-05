#include <bits/stdc++.h>
int main()
{
  int x1,x2,x3,x4;
  scanf("%d %d %d %d",&x1,&x2,&x3,&x4);

  int a = 0,b = 0,c = 0;
  std :: vector<int> v{x1,x2,x3,x4};

  sort(v.begin(),v.end());
  a = v[3] - v[0];
  b = v[3] - v[1];
  c = v[3] - v[2];
  std :: cout << a << " " << b << " " << c  << " ";


}
