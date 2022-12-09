#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    if((a + b) == c || (b + c) == a || (a + c) == b)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
