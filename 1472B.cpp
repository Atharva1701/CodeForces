#include <bits/stdc++.h>
using namespace std;
void test()
{
  int n,a;
  cin >> n;
  set<int> s;
  for(int i=0;i<n;i++){
    cin >> a;
    s.insert(a);
  }
  if(s.size() == 2 && n % 2 == 0 && n > 2)
    cout << "YES\n";
  if(s.size() == 2 && n == 2)
    cout << "NO\n";
  if(s.size() == 1 && n == 2)
    cout << "YES\n";
  if(s.size() == 2 && n % 2 != 0)
    cout << "NO\n";
  if(s.size() == 1 && n % 2 != 0)
    cout << "NO\n"; 
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
