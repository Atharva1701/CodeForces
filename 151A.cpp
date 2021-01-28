#include <bits/stdc++.h>
int main()
{
  int  n, k, l, c, d, p, nl, np;
  std :: cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int mil = (k * l) / nl;
  int lime_toasts = (c * d);
  int salt = p / np;

  int ans = std :: min({mil,lime_toasts,salt});
  std :: cout << ans / n;
}
