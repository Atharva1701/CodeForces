#include <bits/stdc++.h>
using namespace std;
void disp(vector<vector<char>> s)
{
  for(int i=0;i<s.size();i++){
    for(int j=0;j<s[i].size();j++){
      cout << s[i][j];
    }
    cout << endl;
  }
  exit(0);
}
int main()
{
  int n;
  scanf("%d",&n);

  // vector<vector<char>> s(n, vector<char> (5));
  // for(int i=0;i<s.size();i++){
  //   for(int j=0;j<s[i].size();j++){
  //     cin >> s[i][j];
  //   }
  // }
  // for(int i=0;i<s.size();i++){
  //   for(int j=0;j<s[i].size();j++){
  //     if(s[i][j] == 'O' && s[i][j+1] == 'O'){
  //       cout << "YES\n";
  //       s[i][j] = s[i][j+1] = '+';
  //       disp(s);
  //     }
  //   }
  // }
  // for(int i=0;i<s.size();i++){
  //   for(int j=0;j<s[i].size();j++){
  //     if((s[i][j] == '0' && s[i][j+1] == 'X') || (s[i][j] == 'X' && s[i][j+1] == 'O')){
  //       cout << "NO\n";
  //       return 0;
  //     }
  //   }
  // }
  string s,seats;
  while(n--){
    cin >> s;
    seats += s + "\n";
  }
  int find_OO = seats.find("OO");

  if(find_OO >= 0){
    seats.replace(find_OO,2,"++");
    cout << "YES\n" << seats;
  }
  else
    cout << "NO";

}
