#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    int n;
    cin >> n;
    vector<int> v(26);

    for(int i=0;i<n;i++) {
      string s;
      cin >> s;
      for(char ch : s)
        v[ch - 97]++;
    }
    bool flag = true;
    for(int i=0;i<26;i++) {
      if(v[i] % n != 0) {
        flag = false;
        break;
      }
    }
    cout << (flag ? "YES" : "NO") << endl;
  }
}
