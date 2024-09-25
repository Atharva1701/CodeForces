#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  string s;

  while(tt--){
    cin >> s;
    int p1=0,p2=0;
    p1 = int(s[0]-'0')+int(s[1]-'0')+int(s[2]-'0');
    p2 = int(s[3]-'0')+int(s[4]-'0')+int(s[5]-'0');

    if(p1==p2)
      cout << "YES" << endl;
    else
      cout << "NO" <<endl;
  }
}
