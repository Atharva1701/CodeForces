#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) {
    int x,y,n;
    std :: cin >> x >> y >> n;
    if (n - n % x + y <= n) {
			std :: cout << n - n % x + y << std :: endl;
		}
    else {
			std :: cout << n - n % x - (x - y) << std :: endl;
		}
  }
}
