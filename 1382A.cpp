#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    int n,m,b;
    cin >> n >> m;
    vector<bool> vis(1005);
    // bool small = false;
    //
    vector<int> a(n);
    // for(auto& it : a)
    //   cin >> it;
    //
    // for(auto& it : b)
    //   cin >> it;
    //
    // for(int i=0;i<a.size();i++){
    //   for(int j=0;j<b.size();j++){
    //     if(a[i] == b[j]){
    //       cout << "YES\n";
    //       cout << 1 << " " << a[i] << endl;
    //       small = true;
    //       break;
    //     }
    //     if(small == true)
    //       break;
    //   }
    // }
    // if(small == false)
    //   cout << "NO\n";
    for(int i = 0; i < n; i++) {
            cin >> a[i];
            vis[a[i]] = true;
        }
        int e = -1;
        for(int j = 0; j < m; j++) {
            cin >> b;
            if(vis[b]) e = b;
        }
        for(int i = 0; i < n; i++) {
            vis[a[i]] = false;
        }
        if(e == -1) {
            cout << "NO\n";
        }else {
            cout << "YES\n1 " << e << '\n';
        }
  }
}
