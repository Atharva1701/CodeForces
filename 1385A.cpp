#include <bits/stdc++.h>
int main()
{
  int tt;
  scanf("%d",&tt);
  while(tt--) {
    std :: vector<int> v(3);
    for(int &it : v)
      std :: cin >> it;
    sort(v.begin(),v.end());
    if(v[1] != v[2])
      std :: cout << "NO" << std :: endl;
    else
      std :: cout << "YES" << '\n' << v[0] << ' ' << v[0] << ' ' <<  v[2] << std :: endl;;

  }
}
