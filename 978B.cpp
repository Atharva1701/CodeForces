#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int n,cnt = 0;
  cin >> n;

  string s;
  cin >> s;

  for(int i=0;i<(int)s.length();i++){
      if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
        cnt++;
  }
  cout << cnt;
}
