#include <bits/stdc++.h>
int main()
{
  int x,y,z;
  scanf("%d %d %d",&x,&y,&z);
  std::vector<int> vec{x,y,z};
  sort(vec.begin(),vec.end());
  std::cout <<(vec[1] - vec[0]) + (vec[2] - vec[1]);
}
