#include <bits/stdc++.h>
int main()
{
  int n,m;
  bool color = false;
  scanf("%d %d",&n,&m);
  std :: vector<std :: vector<char>> vec(n,std :: vector<char>(m));

  for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++){
      std :: cin >> vec[i][j];
      if(vec[i][j] == 'C' || vec[i][j] == 'M' || vec[i][j] == 'Y')
        color = true;
    }
  }
  if(color == true)
    std :: cout << "#Color" << std :: endl;
  else
    std :: cout << "#Black&White" << std :: endl;
}
