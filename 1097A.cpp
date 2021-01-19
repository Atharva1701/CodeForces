#include <bits/stdc++.h>
int main()
{
  std :: string card;
  std :: cin >> card;
  std :: vector<std :: string> v(5);
  for(auto& it : v)
    std :: cin >> it;

  for(int i=0;i<v.size();i++){
    std :: string temp = v[i].substr(1,2);
    std :: string c = card.substr(1,2);
    std :: string d = v[i].substr(0,1);
    std :: string b = card.substr(0,1);
    if(temp == c || d == b){
      std :: cout << "YES";
      return 0;
    }
  }
  std :: cout << "NO";

}
