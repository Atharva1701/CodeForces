#include <bits/stdc++.h>
int main()
{
  int n;
  scanf("%d",&n);
  std :: set<char> alpha;
  // std :: set<char>::iterator it;
  char str[n];
  scanf("%s",&str);
  for(int i=0;i<n;i++) {
    alpha.insert(tolower(str[i]));
  }
  // for(it = alpha.begin();it!=alpha.end();it++)
  //   printf("%c",*it);
  int size_alpha = alpha.size();
  if(size_alpha >= 26)
    printf("YES");
  else
    printf("NO");
}
