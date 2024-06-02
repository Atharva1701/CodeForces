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
    int i=0;
    while(s[i] != '\0') {
      s[i] = tolower(s[i];
      i++;
    }
    if(s == "yes")
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
