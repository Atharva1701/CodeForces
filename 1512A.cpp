#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    int n,freq = 0;
    cin >> n;
    vector<int> v(n);
    for(auto& it : v)
      cin >> it;
    vector<int> a = v;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++) {
      if(v[i] != a[1]) {
        freq = i+1;
      }
    }
    cout << freq << endl;
  }
}
