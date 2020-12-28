#include <bits/stdc++.h>
int main()
{
  int n,k,a,i = 0,team = 0;
  scanf("%d %d",&n,&k);
  std::vector<int> v;
  for(int i=0;i<n;i++){
    scanf("%d",&a);
    v.push_back(a);
  }
  while(n) {
    if(5 - v[i] >= k)
      team++;
    i++,n--;
  }
  std::cout << team / 3;
}
