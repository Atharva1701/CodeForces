#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
  int tt;
  cin >> tt;
  while(tt--){
    int a,b,n,steps = 0;
    cin >> a >> b >> n;
    if(a > b){
      swap(a,b);
    }
    while(b <= n){
      int x = b;
      b += a;
      a = x;
      steps++;
    }
    cout << steps << endl;
  }

}
