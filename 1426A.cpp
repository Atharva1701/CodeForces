#include <bits/stdc++.h>
using namespace std;
void test_cases()
{
  int n,x;
  cin >> n >> x;

  int floor = 0;
  if(n <= 2)
    cout << 1 << endl;
  else{
    cout << ((n - 3) / x) + 2 << endl;
  }
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
