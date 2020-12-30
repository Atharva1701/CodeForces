#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) {
    int n,k;
    scanf("%d %d",&n,&k);
    std::vector<int> a(n);
    for(auto &it : a)
      scanf("%d",&it);
    std::vector<int> b(n);
    for(auto &it : b)
      scanf("%d",&it);
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int ans = 0;
    for(int i=0;i<n;++i) {
      if(i < k)
        ans += std :: max(a[i],b[i]);
      else
        ans += a[i];
    }
    printf("%d\n",ans);
  }
}
