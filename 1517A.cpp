#include <bits/stdc++.h>
using namespace std;
void test_cases() {
  long long n;
  cin >> n;
  if(n % 2050 == 0) {
    long long j = n / 2050;
    int sum = 0,m;
    while(j > 0) {
      m = j % 10;
      sum += m;
      j /= 10;
    }
    cout << sum << endl;
  }
  else
    cout << -1 << endl;
}
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    test_cases();
  }
}
