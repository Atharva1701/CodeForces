#include <bits/stdc++.h>
using namespace std;
int solve() {
  int result = 0;
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(a < b)
    result+=1;
  if(a < c)
    result+=1;
  if(a < d)
    result+=1;
  return result;
}
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    cout << solve() << endl;
  }
}
