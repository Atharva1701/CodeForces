#include <bits/stdc++.h>
int main()
{
  std :: set<char> s;
  char ch;
  for(int i=1;i<=1000;i++) {
    scanf("%c",&ch);
    if(isalpha(ch))
      s.insert(ch);
    if(ch == '}')
      break;
  }
  printf("%d",s.size());
}
