#include <bits/stdc++.h>
int main()
{
  int t;
  scanf("%d",&t);
  std :: string a = "",b;
  while(t) {
    std :: cin >> b;
    a = b.substr(0,2);
    for(int i = 3;i < b.size(); i +=2)
      a += b[i];
    std :: cout << a << std :: endl;
    t--;
  }
}
