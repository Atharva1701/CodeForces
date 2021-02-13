#include <bits/stdc++.h>
using namespace std;
void test()
{
  int n;
  cin >> n;
  vector<int> v(n),a(n);
  int l = 0,r = n - 1;
  for(auto& it : v)
    cin >> it;
  for(int i=0;i<v.size();i++){
    if(i % 2 == 0)
      a[i] = v[l++];
    else
      a[i] = v[r--];
  }
  for(int s : a)
    cout << s << " ";
}
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while(tt--){
      test();
    }
}
