#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  int x = 0;
  while(tt--){
    int n;
    cin >> n;
    for(int i=1;;i++) {
      if(i % 3 == 0 || i % 10 == 3 )
        continue;
      if(--n == 0) {
        cout << i << endl;
        break;
      }
    }

  }
}
