#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  if(k == 0) {
    cout << "YES\n";
    return;
  }
  if((2 * k) == n) {
    cout << "NO\n";
    return;
  }
  string pref = s.substr(0, k);
  string suff = s.substr(n-k, k);
  reverse(suff.begin(), suff.end());
  bool flag = pref == suff;
  cout << (flag ? "YES" : "NO") << endl;
}
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    test_case();
  }
}
