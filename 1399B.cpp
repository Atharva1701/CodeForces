#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) {
    int n;
    scanf("%d",&n);
    std :: vector<int> a(n);
    std :: vector<int> b(n);
    for(auto &x : a)
      std :: cin >> x;
    for(auto &y : b)
      std :: cin >> y;

      int mna = *min_element(a.begin(), a.end());
  		int mnb = *min_element(b.begin(), b.end());
  		long long ans = 0;
  		for (int i = 0; i < n; ++i) {
  			ans += std :: max(a[i] - mna, b[i] - mnb);
  		}
      std :: cout << ans << std :: endl;
  }
}
