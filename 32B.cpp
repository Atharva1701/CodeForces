#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  string s,result;
  cin >> s;
  string z = "0";
  string o = "1";
  string t = "2";
  for (int i=0;i<s.length();i++) {
        if (s[i] == '.') {
            result += '0';
        }
        else if (s[i] == '-' && i + 1 < s.length()) {
            if (s[i + 1] == '.') {
                result += '1';
                i++;
            }
            else if (s[i + 1] == '-') {
                result += '2';
                i++;
            }
        }
    }
  cout << result;

}
