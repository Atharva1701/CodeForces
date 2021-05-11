#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while(tt--){
    int n;
    cin >> n;

    string s;
    cin >> s;
    int check = 0,no = 0;

    for (char c = 'A'; c <= 'Z'; c++) {
        int first = n;
        int last = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                first = min(first, i);
                last = max(last, i);
            }
        }
        for (int i = first; i <= last; i++) {
            if (s[i] != c) {
                cout << "NO\n";
                check = 1;
                break;
            }
        }
        if(check == 1)
          break;
    }
    if(check == 0)
      cout << "YES\n";
  }
}
