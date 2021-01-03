#include <bits/stdc++.h>
int main()
{
  int n,t1 = 0,t2 = 0,t3 = 0,w = 0;
  scanf("%d",&n);
  std :: vector<int> t(n),i1,i2,i3;
  for(auto &it : t)
    std :: cin >> it;
  for(int i=0;i<n;i++){
    if(t[i] == 1 && t1 != 1){
      t1 = 1;
      i1.push_back(i + 1);
      t[i] = 0;
    }
    if(t[i] == 2 && t2 != 2){
      t2 = 2;
      i2.push_back(i + 1);
      t[i] = 0;
    }
    if(t[i] == 3 && t3 != 3){
      t3 = 3;
      i3.push_back(i + 1);
      t[i] = 0;
    }
    if(t1 + t2 + t3 == 6){
      w++;
      i = 0;
      t1 = t2 = t3 = 0;
    }
  }
  if(w == 0)
    std :: cout << 0 << std :: endl;
  else
    std :: cout << w << std :: endl;
  for(int j=0;j<w;j++)
    std :: cout << i1[j] << " " << i2[j] << " " << i3[j] << std :: endl;
}
