#include <bits/stdc++.h>
int main()
{
  int n;
  scanf("%d",&n);
  std :: string s,d;
  std :: cin >> s >> d;

  int actions = 0;
  for(int i=0;i<n;i++){
    actions += std :: min(abs(s[i] - d[i]),10 - abs(s[i] - d[i]));
  }
  std :: cout << actions;
}
