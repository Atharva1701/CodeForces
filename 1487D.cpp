#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while(t--){
    int n,count = 0;
    cin >> n;
    for(int i=3;i*i<=2*n-1;i+=2)
      ++count;
    cout << count << endl;
  }
}
