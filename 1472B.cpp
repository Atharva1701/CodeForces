#include <bits/stdc++.h>
using namespace std;
void test()
{
  int n,a,one = 0,two = 0,c;
  cin >> n;

  for(int i=0;i<n;i++){
    cin >> c;
    if(c == 1)
      one++;
    else
      two++;
  }
  if((one + 2 * two) % 2 != 0)
    cout << "NO\n";
  else{
    int sum = (one + 2 * two) / 2;
    if(sum % 2 == 0 || (sum % 2 == 1 && one != 0)){
      cout << "YES\n";
    }
    else
      cout << "NO\n";
  }
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
