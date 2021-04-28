#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);

    for(auto& it : a)
      cin >> it;

    for(int i=0;i<(int)a.size()-1;i++) {
      if(a[i] < k) {
        k -= a[i];
        a[n-1] += a[i];
        a[i] = 0;
      }
      else {
        a[i] -= k;
        a[n-1] += k;
        k = 0;
      }
    }
    vector<int>::iterator it;
    for(auto it=a.begin();it!=a.end();it++)
      cout << *it << ' ';
    cout << endl;
  }
}
