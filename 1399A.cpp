#include <bits/stdc++.h>
int main()
{
  int t,n,no;
  scanf("%d", &t);

  while(t) {
    scanf("%d",&n);
    std :: vector<int> a(n);
    for(auto &it : a)
      std :: cin >> it;
    bool moves = true;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++) {
      moves &= (a[i] - a[i-1] <= 1);
    }
    if(moves)
      printf("YES\n");
    else
      printf("NO\n");
    t--;
  }

}
