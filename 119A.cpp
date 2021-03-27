#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int a,b,n;
  cin >> a >> b >> n;
  int grdiv = 0;
  int simon = 0,anti = 0;
  while(n >= grdiv) {
    grdiv = __gcd(a,n);
    n -= grdiv;
    if(n == 0)
      cout << 0;
    grdiv = __gcd(b,n);
    n -= grdiv;
    if(n == 0)
      cout << 1;
  }
}
