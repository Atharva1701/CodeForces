#include <bits/stdc++.h>
int main()
{
  int n,games,h,g,answer = 0;
  scanf("%d",&n);
  games  = n * (n - 1);
  std :: vector<int> ht;
  std :: vector<int> gt;
  for(int i=0;i<n;i++) {
    scanf("%d %d",&h,&g);
    ht.push_back(h);
    gt.push_back(g);
  }
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(i !=j && ht[i] == gt[j]) {
        answer++;
      }
    }
  }
  printf("%d",answer);
}
