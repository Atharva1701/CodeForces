#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n;
  cin >> n;
  string s,result;
  cin >> s;
  for(int i=0;i<(int)s.size();i+=2) {
    result += s[i];
  }
  cout << result << endl;
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
